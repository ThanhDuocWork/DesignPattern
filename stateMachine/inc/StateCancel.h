#ifndef STATE_CANCEL_H
#define STATE_CANCEL_H
#include"IState.h"
#include"Logger.h"

class StateCancel : public IState 
{
    private:

    public:
    StateCancel();
    ~StateCancel();
    void action() override;
};

#endif