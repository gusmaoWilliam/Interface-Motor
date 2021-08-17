QT += widgets serialport
QT += widgets printsupport
requires(qtConfig(combobox))

TARGET = terminal
TEMPLATE = app

SOURCES += \
    acquisition.cpp \
    calibration.cpp \
    dados.cpp \
    main.cpp \
    mainwindow.cpp \
    plot.cpp \
    qcustomplot.cpp \
    settingsdialog.cpp \
    console.cpp

HEADERS += \
    acquisition.h \
    calibration.h \
    dados.h \
    mainwindow.h \
    plot.h \
    qcustomplot.h \
    settingsdialog.h \
    console.h

FORMS += \
    calibration.ui \
    mainwindow.ui \
    plot.ui \
    settingsdialog.ui

RESOURCES += \
    ManagementInterface.qrc

target.path = $$[QT_INSTALL_EXAMPLES]/serialport/terminal
INSTALLS += target
