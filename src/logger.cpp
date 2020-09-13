#include "include/logger.h"

Logger::Logger(QObject* parent) : QObject(parent) {
    logFile.setFileName("log.txt");
    logFile.open(QIODevice::WriteOnly | QIODevice::Append);
}

QByteArray  Logger::timeStamp() {
    return ("[" +time.currentTime().toString()+ "]").toLocal8Bit();
}

void Logger::write(QString arg)
{
    logFile.write(timeStamp() + " " + arg.toLocal8Bit() + "\n");
    logFile.flush();
}

Logger::~Logger() {
    logFile.close();
}
