#ifndef IP_URL_H
#define IP_URL_H

#include <QDialog>

namespace Ui {
class Ip_url;
}

class Ip_url : public QDialog
{
    Q_OBJECT

public:
    explicit Ip_url(QWidget *parent = nullptr);
    ~Ip_url();

private slots:

    void on_pushButton_clicked();

private:
    Ui::Ip_url *ui;
};

#endif // IP_URL_H
