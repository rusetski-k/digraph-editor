#include "canvas.h"
#include "menu.h"
#include <QtGui>

Canvas::Canvas(QGraphicsScene *s)
{
    height = 700;
    width = 500;
    background = Qt::white;
    nodeColor = Qt::black;
    wArc = false;
    scene = s;
    canvas = new QGraphicsRectItem(0, scene);
    canvas->setPen(QPen(Qt::black));
    canvas->setBrush(QBrush(Qt::white));
    canvas->setRect(QRectF(0, 0, height, width));
}


void Canvas::zoomIn()
{
    scene->views().at(0)->scale(1.1,1.1);
}

void Canvas::zoomOut()
{
    scene->views().at(0)->scale(1/1.1,1/1.1);
}

void Canvas::drawCircle(QPoint center, QPoint radius){
    //QGraphicsEllipseItem
}

void Canvas::setChanges(uint w, uint h, QColor bg, QColor nC, bool wA)
{
    width = w;
    height = h;
    background = bg;
    nodeColor = nC;
    wArc = wA;
}

void Canvas::getParametres(uint &w, uint &h, QColor &bg, QColor &nC, bool &wA)
{
    w = width;
    h = height;
    bg = background;
    nC = nodeColor;
    wA = wArc;
}
