#include <QtGui/QGuiApplication>
#include <QtQuick/QtQuick>

#include "qtquick2applicationviewer.h"
#include "myworker.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    MyWorker w;

    QtQuick2ApplicationViewer viewer;
    viewer.setMainQmlFile(QStringLiteral("qml/qml_demo/main.qml"));

    viewer.rootContext()->setContextProperty("worker", &w);
    viewer.showExpanded();

    return app.exec();
}
