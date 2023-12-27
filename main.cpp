#include "mainwindow.h"

#include <QApplication>
#include<QDebug>

extern "C" {
    #include <libavutil/avutil.h>
}

int main(int argc, char *argv[])
{
    // 打印版本号
    qDebug() << av_version_info();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
