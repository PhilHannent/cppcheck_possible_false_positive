#include "my_parent_class.h"

#include "my_base_class.h"
#include "my_class.h"

my_parent_class::my_parent_class(QObject *parent) :
    QGraphicsScene(parent)
{
    my_class* i = new my_class(this);
    Q_UNUSED(i)
}
