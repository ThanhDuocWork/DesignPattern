#ifndef STATE_PLACE_H
#define STATE_PLACE_H
#include"IState.h"
#include"Logger.h"

class StatePlace : public IState 
{
    private:

    public:
    StatePlace();
    ~StatePlace();
    void action() override;
};
#endif