#include "StatePlace.h"

StatePlace::StatePlace() = default;

StatePlace::~StatePlace() = default;

void StatePlace::action()
{
    printLog_I("Order has been placed and is awaiting processing.");
}
