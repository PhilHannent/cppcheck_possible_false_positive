#include "my_base_class.h"

#include "my_parent_class.h"

my_base_class::my_base_class(my_parent_class* parent)
    : m_parent(parent)
{
    connect(this, SIGNAL(signalTest()), this, SLOT(slotResize(QPointF)));
}
