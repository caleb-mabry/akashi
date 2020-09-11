#ifndef LOGGER_H
#define LOGGER_H

#include <QObject>
#include <QFile>
#include <QTextStream>
#include <QDateTime>

class Logger
{
public:
    Logger();
    void write(QString text);
private:
    QString timeStamp();
    QString loggingFileName;
    QTextStream stream;
};

#endif // LOGGER_H
