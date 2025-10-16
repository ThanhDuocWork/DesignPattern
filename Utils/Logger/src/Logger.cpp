#include "Logger.h"

#include <vector>

namespace
{
const std::map<LogState, std::string> &logStateMap()
{
    static const std::map<LogState, std::string> m_logState = {
        {LogState::ALERT, "[ALERT]"},
        {LogState::CRIT, "[CRIT]"},
        {LogState::DEBUG, "[DEBUG]"},
        {LogState::EMERG, "[EMERG]"},
        {LogState::ERR, "[ERR]"},
        {LogState::INFO, "[INFO]"},
        {LogState::NOTICE, "[NOTICE]"},
        {LogState::WARNING, "[WARNING]"}};
    return m_logState;
}
}  // namespace

void printL(LogState logState, std::string pathSource, std::string funcName, int line, std::string text, ...)
{
    std::string messagePattern;

    char buffer[1000];
    va_list args;
    va_start(args, text);
    const int numChars = vsnprintf(buffer, sizeof(buffer), text.c_str(), args);
    va_end(args);
    if (numChars > 0 && numChars < static_cast<int>(sizeof(buffer)))
    {
        messagePattern = buffer;
    }
    else
    {
        messagePattern = "Error formatting string";
    }

    const auto &stateMap = logStateMap();
    const auto it = stateMap.find(logState);
    const std::string state = (it != stateMap.end()) ? it->second : "[UNKNOWN]";

    std::string fileName;
    const size_t pos = pathSource.find_last_of("/");
    if (pos == std::string::npos)
    {
        fileName = pathSource;
    }
    else
    {
        fileName = pathSource.substr(pos + 1);
    }

    const std::string messages = state + "[" + fileName + ":" + funcName + "():" + std::to_string(line) + "] " + messagePattern;

#ifdef _STD_LOG_
    std::cout << messages << std::endl;
#else
    openlog("DesignPatternDemo", LOG_CONS | LOG_PID | LOG_NDELAY, LOG_LOCAL0);
    syslog(static_cast<int>(logState), "%s", messages.c_str());
    closelog();
#endif
}
