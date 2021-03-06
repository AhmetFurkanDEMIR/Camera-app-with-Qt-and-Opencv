#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <thread>
#include <iostream>
#include <stdio.h>
#include <ctime>
#include <unistd.h>

#include <QMainWindow>
#include <QStyleFactory>
#include <QFileDialog>
#include <QLabel>
#include <QComboBox>

#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;
using namespace std;

extern cv::VideoWriter *video;
extern Mat frame;
extern VideoCapture cap;
extern QString dir;
extern QString ip_url;
extern QPushButton *button_url;
extern QPushButton *button_video;
extern QPushButton *button_photo;
extern QComboBox *format_combo;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    static void captureRun(QLabel *label, QPushButton *btn);

    void on_pushButton_6_clicked();

    static void action(QPushButton *button, int flag);

    void on_pushButton_2_clicked();

    static void Count(QPushButton *button);


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
