#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <Eigen/Dense>
#include <iostream>
namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(Eigen::MatrixXd POS1, int geshu1, double *APPROX1, QWidget *parent = 0);
    ~Form();

private:
    Ui::Form *ui;
    Eigen::MatrixXd POS;
    int geshu;
    double *APPROX;
};

#endif // FORM_H
