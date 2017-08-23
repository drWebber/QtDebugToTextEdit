#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qtextedit.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    static QTextEdit *teLog;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pbnDegubMsg_clicked();

    void on_pbnCriticalMsg_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
