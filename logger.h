#ifndef LOGGER_H
#define LOGGER_H

#include "LoggerLevels.h"

#include <QFile>
#include <QString>
#include <QVector>
#include <QTextStream>
#include <QTime>
#include <QDate>

#include <QDebug>

using namespace std;

class Logger : public LoggerLevels
{

public:

    Logger();

    void LogError(Loggs level, const QString &message);
    void Logs(Loggs level, const QString &message);

    ~Logger();

private:

    struct data
    {
        QTime time;
        QDate date;
    };

    QFile *file;
    QTextStream stream;
    QVector<data> time;

};

#endif
