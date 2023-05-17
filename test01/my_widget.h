#ifndef MY_WIDGET_H
#define MY_WIDGET_H

#include <QWidget>// 包含头文件 QWidget 窗口类

class my_widget : public QWidget
{
    Q_OBJECT//一个宏，允许类使用信号和槽的机制

public:
    my_widget(QWidget *parent = 0);
    ~my_widget();
};

#endif // MY_WIDGET_H
