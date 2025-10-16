#include "StateCancel.h"

StateCancel::StateCancel() = default;

StateCancel::~StateCancel() = default;

void StateCancel::action()
{
    printLog_W("Order has been canceled by the customer.");
}
