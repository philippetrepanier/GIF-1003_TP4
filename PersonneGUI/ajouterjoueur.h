#ifndef AJOUTERJOUEUR_H
#define AJOUTERJOUEUR_H

#include <QtGui/QWidget>
#include "ui_ajouterjoueur.h"

class ajouterJoueur : public QWidget
{
    Q_OBJECT

public:
    ajouterJoueur(QWidget *parent = 0);
    ~ajouterJoueur();

private:
    Ui::ajouterJoueurClass ui;
};

#endif // AJOUTERJOUEUR_H
