QT += charts
requires(qtConfig(combobox))

HEADERS += \
    widget.h

SOURCES += \
    main.cpp \
    widget.cpp

#target.path = $$[QT_INSTALL_EXAMPLES]/charts/BarChart3
target.path = /Users/Ryuuuu/QtProjects/BarChart4
INSTALLS += target

FORMS += \
    widget.ui
