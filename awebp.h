#ifndef AWEBP_H
#define AWEBP_H

#include <QMainWindow>
#include "qpushbutton.h"

#pragma execution_character_set("utf-8")

class Awebp : public QMainWindow
{

Q_OBJECT

public:
    Awebp(QWidget *parent = nullptr);
    ~Awebp();

public slots:
    void onClicked();

private:
    QPushButton *mButton;
    void changeBackground();
    void resizeEvent(QResizeEvent *event) override;

};

#endif // AWEBP_H
