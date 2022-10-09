#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include <QProcess>
#include <QFileDialog>
#include <QString>
#include <QMessageBox>
#include <QDebug>
#include <QSound>

#include "form.h"
#include "drawxx.h"
#include "drawyy.h"
#include "drawzz.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    //Form *formw;
    ~MainWindow();

private slots:
    void on_LSM_Button_clicked();
    void lineclear();
    void daoru();
    void baocun();
    void guanbi();
    void xinxi();
    void Draw_X();
    void Draw_Y();
    void Draw_Z();
    void on_KALMAN_Button_clicked();

    void on_KALMANCVButton_clicked();

    void on_KALMANCAButton_clicked();

private:
    Ui::MainWindow *ui;
    QString num1;
    QString num2;
};


#endif // MAINWINDOW_H
