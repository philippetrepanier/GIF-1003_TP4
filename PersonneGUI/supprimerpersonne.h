#ifndef SUPPRIMERPERSONNE_H
#define SUPPRIMERPERSONNE_H

#include <QtGui/QDialog>
#include "ui_supprimerpersonne.h"

class supprimerPersonne : public QDialog
{
    Q_OBJECT

public:
    supprimerPersonne(QWidget *parent = 0);
    ~supprimerPersonne();

private:
    Ui::supprimerPersonneClass ui;
};

#endif // SUPPRIMERPERSONNE_H
