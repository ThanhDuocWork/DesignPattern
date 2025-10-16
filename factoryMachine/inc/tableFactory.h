#ifndef TABLE_FACTORY_H
#define TABLE_FACTORY_H

#include <memory>
#include <string>

#include "IFactory.h"

enum class PlatformType
{
    Amazon,
    Lazada,
    Shoppe
};

class TableFactory
{
public:
    static std::unique_ptr<IFactory> createFactory(PlatformType platform);
    static std::unique_ptr<IFactory> createFactory(const std::string &platformName);
};

#endif  // TABLE_FACTORY_H
