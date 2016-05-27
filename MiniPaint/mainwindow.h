#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QtWidgets>
#include <QApplication>
#include <QFileDialog>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QPen>
#include <QtGlobal>
#include <QWheelEvent>
#include <QtGui>
#include <QtCore>
#include <QPrinter>
#include <QPrintDialog>
#include "scene.h"
#include <iostream>

class Scene;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void scale(int delta);
    QColor getPenColor() {return penColor;} //getteur couleur
    qreal getWidth() {return width;} //getteur épaisseur
    bool getCheckLine() {return checkLine;}
    bool getCheckRect() {return checkRect;}
    bool getCheckEllipse() {return checkEllipse;}
    bool getCheckBrush() {return checkBrush;}
    bool getCheckEraser() {return checkEraser;} //getteurs pour les booléens

private:
    Ui::MainWindow *ui;
    Scene *scene;
    QImage image;
    QColor penColor;
    qreal width;

    bool checkLine;
    bool checkRect;
    bool checkEllipse;
    bool checkBrush;
    bool checkEraser;



private slots:
    void on_actionOuvrir_triggered();
    void on_actionEnregistrer_triggered();
    void on_line_toggled();
    void on_rectangle_toggled();
    void on_ellipse_toggled();
    void on_actionNouveau_triggered();
    void on_actionImprimer_triggered();
    void on_colour_clicked();
    void on_epaisseur_valueChanged(int arg1);
    void on_pen_toggled();
    void on_eraser_toggled(); // définition des slots
    void on_cursor_toggled();
};

#endif // MAINWINDOW_H
