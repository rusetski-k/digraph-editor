#ifndef MENU_H
#define MENU_H

#include <QMainWindow>

class QAction;
class QGraphicsItem;
class QGraphicsRectItem;
class QGraphicsScene;
class QGraphicsView;
class Canvas;
class SettingsDialog;

class Menu : public QMainWindow
{
Q_OBJECT
public:
    Menu();

private slots:
    void updateActions();
//    void del();
//    void saveDoc();
//    void openDoc();
    void newDoc();
    void proAction();
//    void ExportGif();
private:
    void createActions();
    void createMenus();
    void createToolBars();

    QMenu *fileMenu;
    QMenu *editMenu;

    QToolBar *fileToolBar;
    QToolBar *graphToolBar;
    QToolBar *editToolBar;

    QAction *exitAction;
    QAction *NewAction;
    QAction *OpenAction;
    QAction *SaveAction;
    QAction *ExportAction;

    QAction *UndoAction;
    QAction *RedoAction;
    QAction *ZoomInAction;
    QAction *ZoomOutAction;


    QAction *Settings;
    QAction *NodeAction;
    QAction *ArcAction;

    SettingsDialog *dialog;
    Canvas *canvas;
    QGraphicsScene *scene;
    QGraphicsView *view;

};

#endif // MENU_H
