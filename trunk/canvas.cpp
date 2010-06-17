#include "canvas.h"
#include "menu.h"
#include <QtGui>

Canvas::Canvas(QGraphicsScene *s)
{
    dim = QSize (700,500);
    background = Qt::white;
    nodeColor = Qt::black;
    wArc = false;

    scene = s;
    canvas = new QGraphicsRectItem(0, scene);
    canvas->setPen(QPen(Qt::black));
    canvas->setBrush(QBrush(background));
    canvas->setRect(QRectF(QPoint(0, 0), dim));
    factor = 1.0;
}


void Canvas::zoomIn()
{
    scene->views().at(0)->scale(1.1,1.1);
    factor *= 1.1;
}

void Canvas::zoomOut()
{
    scene->views().at(0)->scale(1/1.1,1/1.1);
    factor /= 1.1;
}

void Canvas::drawCircle(QPoint center, QPoint radius){
    //QGraphicsEllipseItem
}

void Canvas::setChanges(QSize d, QColor bg, QColor nC, bool wA)
{
    dim = d;
    background = bg;
    nodeColor = nC;
    wArc = wA;
    update();
}

void Canvas::getParametres(QSize &d, QColor &bg, QColor &nC, bool &wA)
{
    d = dim;
    bg = background;
    nC = nodeColor;
    wA = wArc;
}

void Canvas::update()
{
    //UPD
}

Canvas::~Canvas()
{
    scene->removeItem(canvas);
    //restore zoom level back to normal
    scene->views().at(0)->scale(1/factor,1/factor);
    delete canvas;
}
