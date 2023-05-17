#include "my_widget.h"
#include <QPushButton>// 按钮头文件


//命名规范
//类名 首字母大写， 单词戴念慈间字母大写
my_widget::my_widget(QWidget *parent)
    : QWidget(parent)
{
//    QPushButton *ab = new QPushButton;
//    ab->show();
//    ab->setParent(this);
//    ab->move(100,100);

//    ab->setText("diyigeanq");


    QPushButton * ab2 = new QPushButton("secondBUtton",this);
    ab2->show();
    resize(600,400);

    setFixedSize(600,400);

    setWindowTitle("close");
    ab2->move(100,100);

    connect(ab2,&QPushButton::clicked,this,&my_widget::close);


}

my_widget::~my_widget()
{

}
