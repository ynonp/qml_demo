#ifndef MYWORKER_H
#define MYWORKER_H

#include <QObject>

class MyWorker : public QObject
{
    Q_OBJECT
public:
    explicit MyWorker(QObject *parent = 0);

signals:

public slots:
    void handleGuiClick();
    int getCounter();

private:
    int counter;
};

#endif // MYWORKER_H
