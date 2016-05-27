/*#include "modele.h"

Modele::Modele(QWidget *parent) : QGraphicsView(parent)
{

}

void Modele::wheelEvent(QWheelEvent *event)
{
    setTransformationAnchor(QGraphicsView::AnchorUnderMouse);
    double scaleFactor = 1.15;

    if (event->delta() > 0)
    {
        scale(scaleFactor, scaleFactor);
    }
    else
    {
        scale(1/scaleFactor, scaleFactor);
    }

}

void Modele::mousePressEvent(QMouseEvent *ev)
{
    if (ev->button() == Qt::LeftButton)
    {
        lastPos = ev->pos();
        drawing = true;
        drawRectangle(ev->pos());

    }
}

void Modele::mouseMoveEvent(QMouseEvent *ev)
{
    if ((ev->button() == Qt::LeftButton) && drawing)
    {
        drawRectangle(ev->pos());
    }
}

void Modele::mouseReleaseEvent(QMouseEvent *ev)
{
    if (ev->button() == Qt::LeftButton && drawing)
    {
        drawing = false;
    }
}

void Modele::drawRectangle(const QPointF &endPos)
{
    QPainter line;
    line.setPen(QPen(Qt::black, 5, Qt::SolidLine, Qt::RoundCap,
                        Qt::RoundJoin));
    line.drawLine(lastPos, endPos);
}

*/

