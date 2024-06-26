#include "logger.h"
#include "LoggerLevels.h"

using namespace std;

int main()
{

    Logger logger;
    LoggerLevels level;

    logger.LogError(level.CRITICAL_ERROR, "NEW Message");
    logger.Logs(level.COMPLITE, "NEW Message");

    return 0;
}
