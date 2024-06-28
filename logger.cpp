#include "logger.h"

#include <iostream>

Logger::Logger() {}

void Logger::LogError(Loggs level, const QString &message)
{
    file= new QFile("LogError.txt");
    file->open(QIODevice::Append);
    data timeError;

    if(!file->isOpen())
    {
        qDebug() << "ERROR: File is not open!";
    }

    timeError.time = QTime::currentTime();
    timeError.date = QDate::currentDate();

    stream.setDevice(file);
    stream << "[" << timeError.time.toString("hh:mm:ss") << " | "
           << timeError.date.toString("dd.MM.yyyy") << "]"
           << "[" << LevelToStringLogs(level) << "] " << message << "\n";

    cout << "[" << timeError.time.toString("hh:mm:ss").toStdString() << " | "
         << timeError.date.toString("dd.MM.yyyy").toStdString() << "]"
         << "[" << LevelToStringLogs(level).toStdString() << "] "
         << message.toStdString() << "\n";

    file->close();
}

void Logger::Logs(Loggs level, const QString &message)
{
    file= new QFile("Logs.txt");
    file->open(QIODevice::Append);

    data timeLog;

    if(!file->isOpen())
    {
        qDebug() << "ERROR: File is not open!";
    }

    timeLog.time = QTime::currentTime();
    timeLog.date = QDate::currentDate();

    stream.setDevice(file);
    stream << "[" << timeLog.time.toString("hh:mm:ss") << " | "
           << timeLog.date.toString("dd.MM.yyyy") << "]"
           << "[" << LevelToStringLogs(level) << "] " << message << "\n";

    cout << "[" << timeLog.time.toString("hh:mm:ss").toStdString() << " | "
         << timeLog.date.toString("dd.MM.yyyy").toStdString() << "]"
         << "[" << LevelToStringLogs(level).toStdString() << "] "
         << message.toStdString() << "\n";

    file->close();
}

Logger::~Logger() {}

