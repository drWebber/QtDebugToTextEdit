#include "mainwindow.h"
#include <QApplication>
#include <QDateTime>

void messageHandler(QtMsgType, const QMessageLogContext&, const QString&);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    qInstallMessageHandler(messageHandler);

    MainWindow w;
    w.show();

    return a.exec();
}

void messageHandler(QtMsgType type, const QMessageLogContext& context,
                    const QString &msg)
{
    QString str(QDateTime::currentDateTime().toString("dd.MM.yyyy HH:mm:ss"));

    switch (type) {
    case QtDebugMsg:    str.append(" DBG"); break;
    case QtInfoMsg:     str.append(" INF"); break;
    case QtWarningMsg:  str.append(" WRN"); break;
    case QtCriticalMsg: str.append(" CRT"); break;
    case QtFatalMsg:    str.append(" FTL"); break;
    }

    str.append(" (" + QString(context.category) + "): ");

    MainWindow::teLog->append(str + msg);
}
