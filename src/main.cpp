#include "notepanda.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication EditorApp(argc, argv);
    notepanda Editor;
    Editor.show();
    return EditorApp.exec();
}