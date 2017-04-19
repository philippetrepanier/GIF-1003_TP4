/**
 * \file main.cpp
 * \brief Fichier principal de l'interface Qt
 * \author Philippe Trépanier et Jérémie Roy
 * \date 2017-03-29
 */
#include "personnegui.h"

#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	PersonneGUI w;
	w.show();
	return a.exec();
}
