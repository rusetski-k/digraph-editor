#include <QtGui>
#include "menu.h"
#include "canvas.h"
#include "settingsdialog.h"

Menu::Menu()
{
    canvas = NULL;
    view = new QGraphicsView(this);
    scene = new QGraphicsScene(this);
    //scene->setSceneRect(0,0,700,900);
    scene->setBackgroundBrush(Qt::gray);
    setWindowIcon(QIcon(":/images/label3.png"));
    setWindowTitle(tr("Digraph editor"));
    setWindowState(Qt::WindowMaximized);

    view->setScene(scene);
    setCentralWidget(view);

    createActions();
    createMenus();
    createToolBars();
    newDoc();

    view->setDragMode(QGraphicsView::RubberBandDrag);
    view->setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);
    view->setContextMenuPolicy(Qt::ActionsContextMenu);

    connect(scene, SIGNAL(selectionChanged()),
            this, SLOT(updateActions()));

    updateActions();
}

void Menu::proAction()
{
    dialog = new SettingsDialog(canvas, this);
    dialog->Show();
}

void Menu::updateActions()
{
    foreach (QAction *action, view->actions())
        view->addAction(action);
}

void Menu::newDoc()
{
    if (canvas != NULL)
        delete canvas;
    canvas = new Canvas(scene);
    connect(ZoomInAction, SIGNAL(triggered()), canvas, SLOT(zoomIn()));
    connect(ZoomOutAction, SIGNAL(triggered()), canvas, SLOT(zoomOut()));
    Settings->setEnabled(1);
    SaveAction->setEnabled(1);
    ZoomInAction->setEnabled(1);
    ZoomOutAction->setEnabled(1);
    UndoAction->setEnabled(1);
    RedoAction->setEnabled(1);
    ExportAction->setEnabled(1);
    NodeAction->setEnabled(1);
    ArcAction->setEnabled(1);
    CloseAction->setEnabled(1);
}

void Menu::closeCanv()
{
    if(canvas != NULL){
        delete canvas;
        canvas = NULL;
    }
    Settings->setDisabled(1);
    SaveAction->setDisabled(1);
    ZoomInAction->setDisabled(1);
    ZoomOutAction->setDisabled(1);
    UndoAction->setDisabled(1);
    RedoAction->setDisabled(1);
    ExportAction->setDisabled(1);
    NodeAction->setDisabled(1);
    ArcAction->setDisabled(1);
    CloseAction->setDisabled(1);
}

void Menu::createActions()
{
    exitAction = new QAction(tr("Exit"), this);
        exitAction->setShortcut(tr("Alt+X"));
        connect(exitAction, SIGNAL(triggered()), this, SLOT(close()));

        OpenAction = new QAction(tr("Open"), this);
        OpenAction->setIcon(QIcon(":/images/open.png"));
        OpenAction->setShortcut(tr("Ctrl+O"));
        //connect(OpenAction, SIGNAL(triggered()), this, SLOT(close()));

        SaveAction = new QAction(tr("Save"), this);
        SaveAction->setIcon(QIcon(":/images/save.png"));
        SaveAction->setShortcut(tr("Ctrl+S"));
        //connect(SaveAction, SIGNAL(triggered()), this, SLOT(close()));
        SaveAction->setDisabled(1);

        NewAction = new QAction(tr("New"), this);
        NewAction->setIcon(QIcon(":/images/new.png"));
        NewAction->setShortcut(tr("Ctrl+N"));
        connect(NewAction, SIGNAL(triggered()), this, SLOT(newDoc()));

        ExportAction = new QAction(tr("Export"), this);
        ExportAction->setIcon(QIcon(":/images//export.png"));
        ExportAction->setShortcut(tr("Ctrl+E"));
        //connect(ExportAction, SIGNAL(triggered()), this, SLOT(close()));
        ExportAction->setDisabled(1);

        Settings = new QAction(tr("Settings"), this);
        Settings->setIcon(QIcon(":/images/settings.png"));
        Settings->setShortcut(tr("Alt+S"));
        connect(Settings, SIGNAL(triggered()), this, SLOT(proAction()));
        Settings->setDisabled(1);

        NodeAction = new QAction(tr("Node"), this);
        NodeAction->setIcon(QIcon(":/images/node.png"));
        NodeAction->setShortcut(tr("Ctrl+1"));
        //connect(NodeAction, SIGNAL(triggered()), this, SLOT(ZoomIn()));
        NodeAction->setDisabled(1);

        ArcAction = new QAction(tr("Arc"), this);
        ArcAction->setIcon(QIcon(":/images/arc.png"));
        ArcAction->setShortcut(tr("Ctrl+2"));
        //connect(ArcAction, SIGNAL(triggered()), this, SLOT(close()));
        ArcAction->setDisabled(1);

        UndoAction = new QAction(tr("Undo"), this);
        UndoAction->setIcon(QIcon(":/images/undo.png"));
        UndoAction->setShortcut(tr("F5"));
        //connect(UndoAction, SIGNAL(triggered()), this, SLOT(close()));
        UndoAction->setDisabled(1);

        RedoAction = new QAction(tr("Redo"), this);
        RedoAction->setIcon(QIcon(":/images/redo.png"));
        RedoAction->setShortcut(tr("F6"));
        //connect(RedoAction, SIGNAL(triggered()), this, SLOT(close()));
        RedoAction->setDisabled(1);

        ZoomInAction = new QAction(tr("Zoom +"), this);
        ZoomInAction->setIcon(QIcon(":/images/zoomin.png"));
        ZoomInAction->setShortcut(tr("Ctrl++"));

        ZoomInAction->setDisabled(1);

        ZoomOutAction = new QAction(tr("Zoom -"), this);
        ZoomOutAction->setIcon(QIcon(":/images/zoomout.png"));
        ZoomOutAction->setShortcut(tr("Ctrl+-"));

        ZoomOutAction->setDisabled(1);

        CloseAction = new QAction(tr("Close"), this);
        CloseAction->setShortcut(tr("Ctrl+W"));
        connect(CloseAction, SIGNAL(triggered()), this, SLOT(closeCanv()));
        CloseAction->setDisabled(1);
}

void Menu::createMenus()
{
    fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(NewAction);
    fileMenu->addAction(OpenAction);
    fileMenu->addAction(SaveAction);
    fileMenu->addSeparator();
    fileMenu->addAction(CloseAction);
    fileMenu->addSeparator();
    fileMenu->addAction(ExportAction);
    fileMenu->addSeparator();
    fileMenu->addAction(exitAction);

    editMenu = menuBar()->addMenu(tr("&Edit"));
    editMenu->addAction(UndoAction);
    editMenu->addAction(RedoAction);
    editMenu->addSeparator();
    editMenu->addAction(ZoomInAction);
    editMenu->addAction(ZoomOutAction);
    editMenu->addSeparator();
    editMenu->addAction(Settings);
}

void Menu::createToolBars()
{
    fileToolBar = addToolBar(tr("Document"));
    fileToolBar->setIconSize(QSize (40,40));
    fileToolBar->addAction(NewAction);
    fileToolBar->addAction(OpenAction);
    fileToolBar->addAction(SaveAction);
    fileToolBar->addSeparator();
    fileToolBar->addAction(ExportAction);

    editToolBar = addToolBar(tr("Edit"));
    editToolBar->setIconSize(QSize (40,40));
    editToolBar->addAction(UndoAction);
    editToolBar->addAction(RedoAction);
    editToolBar->addSeparator();
    editToolBar->addAction(ZoomInAction);
    editToolBar->addAction(ZoomOutAction);

    graphToolBar = addToolBar(tr("Graph"));
    graphToolBar->setIconSize(QSize (40,40));
    graphToolBar->addAction(NodeAction);
    graphToolBar->addAction(ArcAction);
}

