#ifndef PERSONNEGUI_H
#define PERSONNEGUI_H

#include <QtGui/QMainWindow>
#include "ui_personnegui.h"

class PersonneGUI : public QMainWindow
{
    Q_OBJECT

public:
    PersonneGUI(QWidget *parent = 0);
    ~PersonneGUI();

private:
    Ui::PersonneGUIClass ui;
};

#endif // PERSONNEGUI_H