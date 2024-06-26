#ifndef LOGGERLEVELS_H
#define LOGGERLEVELS_H

#include <QString>

class LoggerLevels
{

public:

    enum Loggs{ SUCCESS, COMPLITE, INFO, WARNING, ERROR, CRITICAL_ERROR };

    QString LevelToStringLogs(Loggs level)
    {

        switch (level) {

        case SUCCESS:
            return "SUCCESS";
            break;

        case COMPLITE:
            return "COMPLITE";
            break;

        case INFO:
            return "INFO";
            break;

        case WARNING:
            return "WARNING";
            break;

        case ERROR:
            return "ERROR";
            break;

        case CRITICAL_ERROR:
            return "CRITICAL_ERROR";
            break;

        };

    };

};

#endif // LOGGERLEVELS_H
