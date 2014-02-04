#ifndef MY_CLASS_H
#define MY_CLASS_H

#include "my_base_class.h"
#include "my_parent_class.h"

#include <QObject>

class my_class : public my_base_class
{
    Q_OBJECT

public:
    my_class(my_parent_class *parent = 0);

private slots:
    void	slotResize(const QPointF & /*controlPoint*/)
        { return; }

private:
    int m_item;
};

#endif // MY_CLASS_H
