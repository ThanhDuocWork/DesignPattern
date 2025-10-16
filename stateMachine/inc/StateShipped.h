#ifndef STATE_SHIPPED_H
#define STATE_SHIPPED_H

#include "IState.h"

class StateShipped : public IState
{
public:
    StateShipped();
    ~StateShipped() override;

    void action() override;
};

#endif  // STATE_SHIPPED_H
