TEMPLATE = app
TARGET = PersonneGUI
QT += core \
    gui
HEADERS += supprimerpersonne.h \
    ajouterjoueur.h \
    ajouterentraineur.h \
    personnegui.h
SOURCES += supprimerpersonne.cpp \
    ajouterjoueur.cpp \
    ajouterentraineur.cpp \
    main.cpp \
    personnegui.cpp
FORMS += supprimerpersonne.ui \
    ajouterjoueur.ui \
    ajouterentraineur.ui \
    personnegui.ui
RESOURCES += 
LIBS += "../PersonneLib/Debug/libPersonneLib.a"
INCLUDEPATH += "../PersonneLib/."
