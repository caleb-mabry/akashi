#include "include/logger.h"

#include <QFile>
#include <QTextStream>
#include <QDateTime>

Logger::Logger() {

}


QString Logger::timeStamp() {
    QTime time;
    return "[" +time.currentTime().toString()+ "]";
}

void Logger::write(QString arg)
{
    QFile file("log.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
            return;

    QTextStream out(&file);
    out << this->timeStamp() << " " << arg << "\n";
}
