#ifndef STATE_DELIVERED_H
#define STATE_DELIVERED_H

#include "IState.h"

class StateDelivered : public IState
{
public:
    StateDelivered();
    ~StateDelivered() override;

    void action() override;
};

#endif  // STATE_DELIVERED_H
