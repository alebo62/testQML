#ifndef SPEEDOMETER_H
#define SPEEDOMETER_H

#include <QObject>
#include <QQuickPaintedItem>

class Speedometer : public QQuickPaintedItem //QObject
{
    Q_OBJECT
public:
    explicit Speedometer(QQuickItem *parent = nullptr);
    virtual void paint(QPainter *painter);


signals:

};

#endif // SPEEDOMETER_H
