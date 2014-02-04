#ifndef MY_PARENT_CLASS_H
#define MY_PARENT_CLASS_H

#include <QObject>
#include <QGraphicsScene>
#include "my_base_class.h"
#include "my_class.h"

class my_parent_class : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit my_parent_class(QObject *parent = 0);

signals:

public slots:

};

#endif // MY_PARENT_CLASS_H
