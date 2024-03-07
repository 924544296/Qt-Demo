#ifndef WORKTHREAD_H
#define WORKTHREAD_H

#include <QObject>

class WorkThread : public QObject
{
    Q_OBJECT
public:
    explicit WorkThread(QObject *parent = nullptr);

signals:


private:

};

#endif // WORKTHREAD_H
