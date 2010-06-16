#ifndef CANVAS_H
#define CANVAS_H
#include <QtGui/QGraphicsView>

class Menu;

class Canvas: public QObject
{
Q_OBJECT
public:
    Canvas(QGraphicsScene *scene);
    void drawCircle(QPoint center, QPoint radius);

    void setChanges(uint w, uint h, QColor bg, QColor nC, bool wA);
    void getParametres(uint &w, uint &h, QColor &bg, QColor &nC, bool &wA);
public slots:
    void zoomIn();
    void zoomOut();
private:
    QGraphicsScene *scene;
    QGraphicsRectItem *canvas;
    uint width;
    uint height;
    QColor background;
    QColor nodeColor;
    bool wArc;
};

#endif // CANVAS_H
