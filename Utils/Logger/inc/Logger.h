#ifndef _LOGGER_H_
#define _LOGGER_H_

#include <cstdarg>
#include <iomanip>
#include <iostream>
#include <map>
#include <memory>
#include <sstream>
#include <string>
#include <syslog.h>

#define printLog_A(...) printL(LogState::ALERT, __FILE__, __func__, __LINE__, __VA_ARGS__)
#define printLog_C(...) printL(LogState::CRIT, __FILE__, __func__, __LINE__, __VA_ARGS__)
#define printLog_E(...) printL(LogState::ERR, __FILE__, __func__, __LINE__, __VA_ARGS__)
#define printLog_EM(...) printL(LogState::EMERG, __FILE__, __func__, __LINE__, __VA_ARGS__)
#define printLog_W(...) printL(LogState::WARNING, __FILE__, __func__, __LINE__, __VA_ARGS__)
#define printLog_N(...) printL(LogState::NOTICE, __FILE__, __func__, __LINE__, __VA_ARGS__)
#define printLog_I(...) printL(LogState::INFO, __FILE__, __func__, __LINE__, __VA_ARGS__)
#define printLog_D(...) printL(LogState::DEBUG, __FILE__, __func__, __LINE__, __VA_ARGS__)

enum LogState
{
    EMERG = 0,
    ALERT,
    CRIT,
    ERR,
    WARNING,
    NOTICE,
    INFO,
    DEBUG
};

void printL(LogState logState, std::string pathSource, std::string funcName, int line, std::string text, ...);

#endif  // _LOGGER_H_
