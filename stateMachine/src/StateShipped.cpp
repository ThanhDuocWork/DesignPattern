#include "StateShipped.h"

StateShipped::StateShipped() = default;

StateShipped::~StateShipped() = default;

void StateShipped::action()
{
    printLog_I("Order has been shipped and is on its way to the customer.");
}
