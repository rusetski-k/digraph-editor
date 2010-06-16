#include <QApplication>
#include "menu.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Menu view;
    view.show();
    return app.exec();
}
