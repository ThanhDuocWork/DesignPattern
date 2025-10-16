#ifndef ISTATE_H
#define ISTATE_H

#include "Logger.h"

class IState
{
public:
    virtual ~IState() = default;
    virtual void action() = 0;
};

#endif  // ISTATE_H
