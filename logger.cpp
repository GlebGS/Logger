#include "logger.h"

#include <iostream>

Logger::Logger() {}

void Logger::LogError(Loggs level, const QString &message)
{
    file= new QFile("LogError.txt");
    file->open(QIODevice::Append);
    data time;

    if(!file->isOpen())
    {
        qDebug() << "ERROR: File is not open!";
    }

    time.time = QTime::currentTime();
    time.date = QDate::currentDate();

    stream.setDevice(file);
    stream << "[" << time.time.toString("hh:mm:ss") << " | "
           << time.date.toString("dd.MM.yyyy") << "]"
           << "[" << LevelToStringLogs(level) << "] " << message << "\n";

    cout << "[" << time.time.toString("hh:mm:ss").toStdString() << " | "
         << time.date.toString("dd.MM.yyyy").toStdString() << "]"
         << "[" << LevelToStringLogs(level).toStdString() << "] "
         << message.toStdString() << "\n";

    file->close();
}

void Logger::Logs(Loggs level, const QString &message)
{
    file= new QFile("Logs.txt");
    file->open(QIODevice::Append);

    data time;

    if(!file->isOpen())
    {
        qDebug() << "ERROR: File is not open!";
    }

    time.time = QTime::currentTime();
    time.date = QDate::currentDate();

    stream.setDevice(file);
    stream << "[" << time.time.toString("hh:mm:ss") << " | "
           << time.date.toString("dd.MM.yyyy") << "]"
           << "[" << LevelToStringLogs(level) << "] " << message << "\n";

    cout << "[" << time.time.toString("hh:mm:ss").toStdString() << " | "
         << time.date.toString("dd.MM.yyyy").toStdString() << "]"
         << "[" << LevelToStringLogs(level).toStdString() << "] "
         << message.toStdString() << "\n";

    file->close();
}

Logger::~Logger() {}

