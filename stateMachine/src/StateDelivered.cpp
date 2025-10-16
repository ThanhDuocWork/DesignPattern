#include "StateDelivered.h"

StateDelivered::StateDelivered() = default;

StateDelivered::~StateDelivered() = default;

void StateDelivered::action()
{
    printLog_I("Order has been successfully delivered to the customer.");
}
