#ifndef STATE_DELIVERED_H
#define STATE_DELIVERED_H
#include"IState.h"
#include"Logger.h"

class StateDelivery : public IState 
{
    private:

    public:
    StateDelivery();
    ~StateDelivery();
    void action() override;
};


#endif