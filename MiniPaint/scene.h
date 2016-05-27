#ifndef SCENE_H
#define SCENE_H

#include <QObject>
#include <QWidget>
#include <QtWidgets>
#include <QApplication>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QPen>
#include <QGraphicsSceneMouseEvent>
#include <QtGlobal>
#include <QWheelEvent>
#include <QtGui>
#include <QtCore>
#include <QMessageBox>
#include "mainwindow.h"
#include "ui_mainwindow.h"

class MainWindow;

class Scene : public QGraphicsScene //class scène héritant de QGraphicsScene
{
public:
    Scene(QWidget *parent = 0) : QGraphicsScene(parent), drawing(false), currentItem(NULL) {} //construteur scene avec comme paramètre de QGraphicsScene le parent
    void setWindow(MainWindow *window) {this->window = window; }//définition d'un setteur pour la scène comme élement de MainWindow
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void wheelEvent(QGraphicsSceneWheelEvent *event); //Evenement de la souris


private:
    bool drawing; //booléen pour savoir si on déssine
    QPointF startPos; // position de début pour la souris au clique
    MainWindow *window;
    QGraphicsItem *currentItem; //item déssiné pendant le move
    QGraphicsPathItem *brush; // chemin de la brosse
    QGraphicsPathItem *eraser; //chemin de la gomme

};

#endif // SCENE_H
