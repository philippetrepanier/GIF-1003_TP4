#ifndef PERSONNEGUI_H
#define PERSONNEGUI_H

#include <QtGui/QMainWindow>
#include "ui_personnegui.h"
#include "Annuaire.h"

const std::string NOMCLUB = "Club de Hockey de la Rive-Sud";

class PersonneGUI: public QMainWindow
{
	Q_OBJECT

public:
	PersonneGUI(QWidget *parent = 0);
	~PersonneGUI();

private slots:
	void dialogEntraineur();
	void dialogJoueur();
	void dialogSupprimer();

private:
	Ui::PersonneGUIClass ui;
	tp::Annuaire annuaire;

};

#endif // PERSONNEGUI_H
