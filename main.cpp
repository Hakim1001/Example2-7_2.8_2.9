#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>
#include "win.h"
int main(int argc, char *argv[])
{
QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8")); //изменения
QApplication app(argc, argv);
Win win(0);
win.show();
return app.exec();
}
