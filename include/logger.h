#ifndef LOGGER_H
#define LOGGER_H

#include <QObject>
#include <QFile>
#include <QTime>

class Logger : public QObject {
    Q_OBJECT

public:
    Logger(QObject* parent = nullptr);
    ~Logger();
    void write(QString text);

private:
    QByteArray timeStamp();
    QTime time;
    QFile logFile;
};

#endif // LOGGER_H
