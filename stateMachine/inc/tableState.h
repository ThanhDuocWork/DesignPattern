#ifndef TABLE_STATE_H
#define TABLE_STATE_H

#include <initializer_list>
#include <memory>
#include <vector>

#include "IState.h"
#include "Parameter.h"

class TableState
{
public:
    TableState();
    ~TableState();

    void transitionTo(OrderState state);
    void runWorkflow(std::initializer_list<OrderState> states);
    void runWorkflow(const std::vector<OrderState> &states);

private:
    std::unique_ptr<IState> m_currentState;

    std::unique_ptr<IState> createState(OrderState state);
};

#endif  // TABLE_STATE_H
