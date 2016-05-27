/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOuvrir;
    QAction *actionEnregistrer;
    QAction *actionAdd_drawing_bar;
    QAction *actionImprimer;
    QAction *actionNouveau;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QMenu *menuAffichage;
    QStatusBar *statusbar;
    QDockWidget *dockPalette;
    QWidget *dockWidgetContents;
    QToolButton *ellipse;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *colour;
    QSlider *epaisseur;
    QToolButton *line;
    QToolButton *rectangle;
    QToolButton *pen;
    QToolButton *cursor;
    QToolButton *eraser;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMouseTracking(true);
        actionOuvrir = new QAction(MainWindow);
        actionOuvrir->setObjectName(QStringLiteral("actionOuvrir"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix2/icons toolbar/open_folder_yellow.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOuvrir->setIcon(icon);
        actionEnregistrer = new QAction(MainWindow);
        actionEnregistrer->setObjectName(QStringLiteral("actionEnregistrer"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix2/icons toolbar/document_save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEnregistrer->setIcon(icon1);
        actionAdd_drawing_bar = new QAction(MainWindow);
        actionAdd_drawing_bar->setObjectName(QStringLiteral("actionAdd_drawing_bar"));
        actionImprimer = new QAction(MainWindow);
        actionImprimer->setObjectName(QStringLiteral("actionImprimer"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix2/icons toolbar/printer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionImprimer->setIcon(icon2);
        actionNouveau = new QAction(MainWindow);
        actionNouveau->setObjectName(QStringLiteral("actionNouveau"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix2/icons toolbar/document_new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNouveau->setIcon(icon3);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setEnabled(true);
        graphicsView->setBaseSize(QSize(0, 0));
        graphicsView->setMouseTracking(false);
        graphicsView->setFrameShape(QFrame::NoFrame);
        graphicsView->setFrameShadow(QFrame::Plain);
        graphicsView->setLineWidth(0);

        horizontalLayout->addWidget(graphicsView);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName(QStringLiteral("menuFichier"));
        menuAffichage = new QMenu(menubar);
        menuAffichage->setObjectName(QStringLiteral("menuAffichage"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        dockPalette = new QDockWidget(MainWindow);
        dockPalette->setObjectName(QStringLiteral("dockPalette"));
        dockPalette->setMinimumSize(QSize(167, 193));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        ellipse = new QToolButton(dockWidgetContents);
        ellipse->setObjectName(QStringLiteral("ellipse"));
        ellipse->setGeometry(QRect(40, 220, 61, 51));
        ellipse->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/icons bouton/circle46.png"), QSize(), QIcon::Normal, QIcon::Off);
        ellipse->setIcon(icon4);
        ellipse->setIconSize(QSize(30, 30));
        ellipse->setCheckable(true);
        ellipse->setAutoExclusive(true);
        verticalLayoutWidget = new QWidget(dockWidgetContents);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 340, 161, 101));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        colour = new QPushButton(verticalLayoutWidget);
        colour->setObjectName(QStringLiteral("colour"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/icons bouton/palette-icone-6030-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        colour->setIcon(icon5);

        verticalLayout->addWidget(colour);

        epaisseur = new QSlider(verticalLayoutWidget);
        epaisseur->setObjectName(QStringLiteral("epaisseur"));
        epaisseur->setCursor(QCursor(Qt::PointingHandCursor));
        epaisseur->setMinimum(5);
        epaisseur->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(epaisseur);

        line = new QToolButton(dockWidgetContents);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(40, 120, 61, 51));
        line->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/prefix1/icons bouton/line.png"), QSize(), QIcon::Normal, QIcon::Off);
        line->setIcon(icon6);
        line->setIconSize(QSize(30, 30));
        line->setCheckable(true);
        line->setAutoExclusive(true);
        rectangle = new QToolButton(dockWidgetContents);
        rectangle->setObjectName(QStringLiteral("rectangle"));
        rectangle->setGeometry(QRect(40, 170, 61, 51));
        rectangle->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/new/prefix1/icons bouton/rectangular43.png"), QSize(), QIcon::Normal, QIcon::Off);
        rectangle->setIcon(icon7);
        rectangle->setIconSize(QSize(30, 30));
        rectangle->setCheckable(true);
        rectangle->setAutoExclusive(true);
        pen = new QToolButton(dockWidgetContents);
        pen->setObjectName(QStringLiteral("pen"));
        pen->setGeometry(QRect(40, 70, 61, 51));
        pen->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/new/prefix1/icons bouton/pencil.png"), QSize(), QIcon::Normal, QIcon::Off);
        pen->setIcon(icon8);
        pen->setIconSize(QSize(30, 30));
        pen->setCheckable(true);
        pen->setChecked(false);
        pen->setAutoExclusive(true);
        pen->setToolButtonStyle(Qt::ToolButtonIconOnly);
        cursor = new QToolButton(dockWidgetContents);
        cursor->setObjectName(QStringLiteral("cursor"));
        cursor->setGeometry(QRect(40, 20, 61, 51));
        cursor->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/new/prefix1/icons bouton/cursor_arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        cursor->setIcon(icon9);
        cursor->setIconSize(QSize(30, 30));
        cursor->setCheckable(true);
        cursor->setAutoExclusive(true);
        eraser = new QToolButton(dockWidgetContents);
        eraser->setObjectName(QStringLiteral("eraser"));
        eraser->setGeometry(QRect(40, 270, 61, 51));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/new/prefix1/icons bouton/Eraser-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        eraser->setIcon(icon10);
        eraser->setIconSize(QSize(30, 30));
        eraser->setCheckable(true);
        eraser->setAutoExclusive(true);
        dockPalette->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockPalette);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setMinimumSize(QSize(0, 0));
        toolBar->setBaseSize(QSize(0, 0));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFichier->menuAction());
        menubar->addAction(menuAffichage->menuAction());
        menuFichier->addAction(actionNouveau);
        menuFichier->addAction(actionOuvrir);
        menuFichier->addAction(actionEnregistrer);
        menuFichier->addAction(actionImprimer);
        menuAffichage->addAction(actionAdd_drawing_bar);
        toolBar->addAction(actionNouveau);
        toolBar->addAction(actionOuvrir);
        toolBar->addAction(actionEnregistrer);
        toolBar->addAction(actionImprimer);
        toolBar->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(actionAdd_drawing_bar, SIGNAL(triggered()), dockPalette, SLOT(showNormal()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MiniPaint", 0));
        actionOuvrir->setText(QApplication::translate("MainWindow", "Ouvrir", 0));
        actionOuvrir->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actionEnregistrer->setText(QApplication::translate("MainWindow", "Enregistrer", 0));
#ifndef QT_NO_TOOLTIP
        actionEnregistrer->setToolTip(QApplication::translate("MainWindow", "Enregistrer", 0));
#endif // QT_NO_TOOLTIP
        actionEnregistrer->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        actionAdd_drawing_bar->setText(QApplication::translate("MainWindow", "Add drawing bar", 0));
        actionImprimer->setText(QApplication::translate("MainWindow", "Imprimer", 0));
        actionImprimer->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0));
        actionNouveau->setText(QApplication::translate("MainWindow", "Nouveau", 0));
        actionNouveau->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0));
        menuAffichage->setTitle(QApplication::translate("MainWindow", "Affichage", 0));
#ifndef QT_NO_TOOLTIP
        ellipse->setToolTip(QApplication::translate("MainWindow", "Rond", 0));
#endif // QT_NO_TOOLTIP
        ellipse->setText(QApplication::translate("MainWindow", "Circle", 0));
        colour->setText(QApplication::translate("MainWindow", "Couleur", 0));
#ifndef QT_NO_TOOLTIP
        epaisseur->setToolTip(QApplication::translate("MainWindow", "Epaisseur dessin", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        line->setToolTip(QApplication::translate("MainWindow", "Ligne", 0));
#endif // QT_NO_TOOLTIP
        line->setText(QApplication::translate("MainWindow", "Line", 0));
#ifndef QT_NO_TOOLTIP
        rectangle->setToolTip(QApplication::translate("MainWindow", "Rectangle", 0));
#endif // QT_NO_TOOLTIP
        rectangle->setText(QApplication::translate("MainWindow", "Rectangle", 0));
#ifndef QT_NO_TOOLTIP
        pen->setToolTip(QApplication::translate("MainWindow", "Crayon", 0));
#endif // QT_NO_TOOLTIP
        pen->setText(QApplication::translate("MainWindow", "Pen", 0));
#ifndef QT_NO_TOOLTIP
        cursor->setToolTip(QApplication::translate("MainWindow", "Curseur", 0));
#endif // QT_NO_TOOLTIP
        cursor->setText(QApplication::translate("MainWindow", "...", 0));
#ifndef QT_NO_TOOLTIP
        eraser->setToolTip(QApplication::translate("MainWindow", "Gomme", 0));
#endif // QT_NO_TOOLTIP
        eraser->setText(QApplication::translate("MainWindow", "gomme", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
