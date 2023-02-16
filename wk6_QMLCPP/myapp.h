#ifndef MYAPP_H
#define MYAPP_H

#include <QObject>

class myapp : public QObject

//class myapp
{
    Q_OBJECT

public:
    //myapp();
    explicit myapp(QObject *parent = 0);

signals:
    void sendMess(const QString &txt_box_str);
    void sendMess2(const QString &txt_box_str2);
    void sendMess3(const QString &txt_box_str3);

public slots:
    void func_btn_clk_on();
    void func_btn_clk_off();
    void timer_show();
    void timer_counter();
    void timer_extra();
};

#endif // MYAPP_H
