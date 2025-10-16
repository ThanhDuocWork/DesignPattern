#ifndef STATE_CANCEL_H
#define STATE_CANCEL_H

#include "IState.h"

class StateCancel : public IState
{
public:
    StateCancel();
    ~StateCancel() override;

    void action() override;
};

#endif  // STATE_CANCEL_H
