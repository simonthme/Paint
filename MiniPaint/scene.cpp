#include "scene.h"


void Scene::wheelEvent(QGraphicsSceneWheelEvent *event) //evenement souris roulette
{
    window->scale(event->delta()); //on appelle la fonction de zoom
}

void Scene::mousePressEvent(QGraphicsSceneMouseEvent *event) //evenement souris si on clique
{
    if (event->button() == Qt::LeftButton) // quand l'évenement est le bouton gauche de cliqué
    {

    startPos = event->scenePos(); // on prends la position dans la scène
    drawing = true; //on déssine

    if(window->getCheckBrush()) // si le bouton brush est cliqué
    {
        brush = new QGraphicsPathItem(); //nouveau QGraohicsPathItem
        brush->setPen(QPen(window->getPenColor(), window->getWidth(), Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin)); //aspect du trait
        QPainterPath brushPath; //chemin de dessin
        brushPath.moveTo(startPos); //chemin de dessin intialisé a la postion de départ
        brush->setPath(brushPath); //l'objet dessin du chemin prends comme chemin le chemin de la brosse
        this->addItem(brush); // on ajoute l'élément
    }

    if(window->getCheckEraser()) // pareil que pour la brosse
    {
        eraser = new QGraphicsPathItem();
        eraser->setPen(QPen(Qt::white, window->getWidth(), Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        QPainterPath eraserPath;
        eraserPath.moveTo(startPos);
        eraser->setPath(eraserPath);
        this->addItem(eraser);
    }


    }
}

void Scene::mouseMoveEvent(QGraphicsSceneMouseEvent *event) //slot quand on bouge la souris
{
    if (drawing) // si on déssine et bouton enfoncé
    {
        if(currentItem)
            delete currentItem; //on supprime l'élément qui est déssiné
        if(window->getCheckBrush())
        {

            if(brush)
            {
            QPainterPath brushPath = brush->path(); // le chemin de déssin prends le chemin de l'élément
            startPos = event->scenePos();
            brushPath.lineTo(startPos); //on déssine quand on bouge
            brush->setPath(brushPath);
            }
        }

        if(window->getCheckEraser()) // pareil que pour brosse
        {
            QPainterPath eraserPath = eraser->path();
            startPos = event->scenePos();
            eraserPath.lineTo(startPos);
            eraser->setPath(eraserPath);
        }

        if (window->getCheckLine()) // on ajoute une ligne qui sera ensuite supprimé avec en paramètre la couleur choisit et l'épaisseur
        currentItem = addLine(QLineF(startPos, event->scenePos()), QPen(window->getPenColor(), window->getWidth(), Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));

        if(window->getCheckRect()) // pareil que pour ligne mais pour rect
        currentItem = addRect(QRectF(startPos,event->scenePos()),QPen(window->getPenColor(), window->getWidth(), Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));

        if(window->getCheckEllipse()) // pareil que pour ligne mais pour ellipse
        currentItem = addEllipse(QRectF(startPos,event->scenePos()), QPen(window->getPenColor(), window->getWidth(), Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));


    }
}

void Scene::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)//evènement de relachement du bouton de la souris
{
    if (event->button() == Qt::LeftButton && drawing) //si l'évènement qui est bouton gauche est relaché et si on déssinait alors..
    {
        if(currentItem){
            delete currentItem; // on supprime le dernier élément qui est résté sur la view
        currentItem = NULL; // on remet currentitem a NULL
        }

    if(window->getCheckLine()) //on ajoute une ligne lorque la souris est relaché
    addLine(QLineF(startPos, event->scenePos()), QPen(window->getPenColor(), window->getWidth(), Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    //setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable);

    if(window->getCheckRect()) // on ajoute un rect lorsque la souris est relaché
    addRect(QRectF(startPos,event->scenePos()), QPen(window->getPenColor(), window->getWidth(), Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));

    if(window->getCheckEllipse()) // on ajoute une ellipse lorsque la souris est relaché
    addEllipse(QRectF(startPos,event->scenePos()), QPen(window->getPenColor(), window->getWidth(), Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));

    drawing = false; // on ne déssine plus
    }

}




