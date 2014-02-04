#ifndef MY_BASE_CLASS_H
#define MY_BASE_CLASS_H

#include <QObject>

class my_parent_class;

class my_base_class : public QObject
{
    Q_OBJECT

public:
    QObject* asQObject()
        { return this; }

    my_base_class(my_parent_class* parent);

signals:
    void        signalTest();

private slots:
    virtual void	slotResize(const QPointF & controlPoint) = 0;

private:
    my_parent_class*    m_parent;
};

#endif // MY_BASE_CLASS_H
