#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "modele.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) //constructeur mainWindow
{
    ui->setupUi(this);
    scene = new Scene(ui->graphicsView); //création de notre objet scène en fonction de notre class Scène hérité de QGrahicsScene
    ui->graphicsView->setScene(scene); // GraphicsView prends une scène
    scene->setWindow(this);
    scene->setSceneRect(ui->graphicsView->rect()); // on définit le rectangle de la scène comme la graphics view
    checkLine = false;
    checkRect = false;
    checkEllipse = false;
    checkBrush = false;
    checkEraser = false;// définition de toutes les booléens qui vont servir à dessiner si le bouton est cliqué
}

void MainWindow::on_actionOuvrir_triggered() // slot pour ouvrir une inmage
{
    QString fichierO = QFileDialog::getOpenFileName(this, "Ouvrir un fichier", QDir::currentPath(), "*.png");// enregistrement du chemin dans fichieO et ouverture de la boite de dialogue
    QImage loadedImage(fichierO); // on lie notre QImage avec le chemin du fichier à ouvrir
    if(loadedImage.load(fichierO)) // ouverture du fichier et verification que le fichier est bien ouvert
    {
        QGraphicsPixmapItem *item = scene->addPixmap(QPixmap::fromImage(loadedImage)); // transformation de la QImage en Pixmap pour pouvoir l'ajouter à la scène
        item->setFlags(QGraphicsPixmapItem::ItemIsMovable | QGraphicsPixmapItem::ItemIsSelectable); // flags de QGraphicsPixmap item pour séléctionner et déplacer l'image, ne marche
        //pas peut être car on a un QGraphicsmouseEvent dans notre scène avec condition cliqué?
    }
}


void MainWindow::on_actionEnregistrer_triggered()// slot pour enregistrer
{
    QString fichierS = QFileDialog::getSaveFileName(this, "Enregistrer un fichier", QString() , "Images (*.png)"); //ouverture de la boite de dialog pour enregistrer une image png, envois le chemin
    if (!fichierS.isNull()) // vérification que le fichier sauvegarder n'est pas vide
        {
            QPixmap pixMap = this->ui->graphicsView->grab(); // on prends en pixmap la graphicsView
            pixMap.save(fichierS);// on sauvegarde le pixmap
        }

}


void MainWindow::scale(int delta) //fonction de zoom
{
    ui->graphicsView->setTransformationAnchor(QGraphicsView::AnchorUnderMouse); // pour que notre graphicsView soit transformé au roulement de la souris
    double scaleFactor = 1.1;

    if(delta > 0) // condition de zoom
    {
        ui->graphicsView->scale(scaleFactor, scaleFactor); //zoom
    }
    else
    {
        ui->graphicsView->scale(1/scaleFactor, 1/scaleFactor);//dézoom
    }
}

void MainWindow::on_line_toggled() //slot si on clique le bouton
{
    if(ui->line->isChecked()) // vérification que le bouton est coché
    {
      checkLine = true; //renvois vrai
      //checked = checkLine;

    }

    checkRect = false;
    checkEllipse = false;
    checkBrush = false;
    checkEraser = false;// pour que toutes les autres outils ne déssinent pas
}

void MainWindow::on_rectangle_toggled() //slot si on clique le bouton pareil que line
{
    if(ui->rectangle->isChecked())
    {
        checkRect = true;
    }

    checkLine = false;
    checkEllipse = false;
    checkBrush = false;
    checkEraser = false;

}

void MainWindow::on_ellipse_toggled() // pareil que line et rectangle
{
    if(ui->ellipse->isChecked())
    {
        checkEllipse = true;

    }

    checkLine = false;
    checkRect = false;
    checkBrush = false;
    checkEraser = false;
}

void MainWindow::on_pen_toggled() //pareil que pour les autres
{
    if(ui->pen->isChecked())
    {
        checkBrush = true;
    }

    checkLine = false;
    checkRect = false;
    checkEllipse = false;
    checkEraser = false;
}

void MainWindow::on_eraser_toggled() //slot pareil que les autres
{
    if(ui->eraser->isChecked())
    {
        checkEraser = true;
    }

    checkLine = false;
    checkRect = false;
    checkEllipse = false;
    checkBrush = false;

}

void MainWindow::on_cursor_toggled() //si on appuie sur le cuseur alors rien ne se dessine
{
    checkLine = false;
    checkRect = false;
    checkEllipse = false;
    checkBrush = false;
    checkEraser = false;
}


void MainWindow::on_actionImprimer_triggered()// slot d'impression
{
    QPrinter printer(QPrinter::HighResolution); // définition d'un objet QPrinter avec le flag high res
      QPrintDialog dialog(&printer, this); //création de la boite de dialogue dépendant de Qprinter
      dialog.exec();// ouverture de la boite de dialogue
      QPainter painter(&printer);
      scene->render(&painter);// impression de la scène
}

void MainWindow::on_actionNouveau_triggered()//slot pour nouveau fichier
{
    scene = new Scene(ui->graphicsView);
    ui->graphicsView->setScene(scene);
    scene->setWindow(this);
    scene->setSceneRect(ui->graphicsView->rect()); // création d'une nouvelle scène
}

void MainWindow::on_colour_clicked() //slot couleur
{
    penColor = QColorDialog::getColor(Qt::white, this); // on récupère la couleur à l'aide d'une boite de dialogue

}

void MainWindow::on_epaisseur_valueChanged(int arg1) // slot épaisseur
{
    width = arg1; //on prends la valeur renvoyé par le slider comme épaisseur
}



MainWindow::~MainWindow() //déstructeur mainWindow
{
    delete ui;
}
