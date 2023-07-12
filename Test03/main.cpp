#include "my_widget.h"
#include <QApplication>//包含一个应用程序类的头文件

//main程序入口，argc命令行变量的数量 argc命令行变量的数组
int main(int argc, char *argv[])
{
    //a应用程序对象，在qt中，应用程序对象，有且仅有一个
    QApplication a(argc, argv);
    //窗口对象 my_widget父类 ->Qwidget
    mywidget w;
    //窗口对象， 默认不会显示，必须调用show方法显示窗口
    w.show();
    //让应用程序对象进入消息循环机制
    //把代码阻塞到这行
    return a.exec();


}
