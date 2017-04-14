#ifndef PERSONNEGUI_H
#define PERSONNEGUI_H

#include <QtGui/QMainWindow>
#include "ui_personnegui.h"
#include "Annuaire.h"

class PersonneGUI: public QMainWindow
{
	Q_OBJECT

public:
	PersonneGUI(QWidget *parent = 0);
	~PersonneGUI();

private slots:
	void dialogEntraineur();
	void dialogJoueur();
//	void dialogSupprimer();

private:
	Ui::PersonneGUIClass ui;
};

#endif // PERSONNEGUI_H
