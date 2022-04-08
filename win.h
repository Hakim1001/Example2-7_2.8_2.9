#ifndef win_h
#define win_h
#include <QBoxLayout>
#include <QFrame>
#include <QLabel>
#include <QLineEdit>
#include <QMessageBox>
#include <QPushButton>
#include <QValidator>
#include <QWidget>
#include <QtGui>
#include "Area.h"
class Win: public QWidget
{
protected:
QTextCodec *codec;
Area * area; // область отображения рисунка
QPushButton * btn;
public:
Win();
};
#endif // WIN_H
