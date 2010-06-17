#ifndef CANVAS_H
#define CANVAS_H
#include <QtGui/QGraphicsView>

class Menu;

class Canvas: public QObject
{
Q_OBJECT
public:
    Canvas(QGraphicsScene *scene);
    ~Canvas();

    void drawCircle(QPoint center, QPoint radius);
    void setChanges(QSize d, QColor bg, QColor nC, bool wA);
    void getParametres(QSize &d, QColor &bg, QColor &nC, bool &wA);
    void update();

public slots:
    void zoomIn();
    void zoomOut();

private:
    QGraphicsScene *scene;
    QGraphicsRectItem *canvas;
    QSize dim;
    uint width;
    uint height;
    QColor background;
    QColor nodeColor;
    qreal factor;
    bool wArc;
};

#endif // CANVAS_H
