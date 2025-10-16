#ifndef I_FACTORY_H
#define I_FACTORY_H

#include <string>

#include "Logger.h"

class IFactory
{
public:
    virtual ~IFactory() = default;
    virtual void Delivery() = 0;
};

#endif  // I_FACTORY_H
