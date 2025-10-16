#ifndef STATE_PLACE_H
#define STATE_PLACE_H

#include "IState.h"

class StatePlace : public IState
{
public:
    StatePlace();
    ~StatePlace() override;

    void action() override;
};

#endif  // STATE_PLACE_H
