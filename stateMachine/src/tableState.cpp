#include "tableState.h"

#include <stdexcept>

#include "StateCancel.h"
#include "StateDelivered.h"
#include "StatePlace.h"
#include "StateShipped.h"

TableState::TableState() = default;

TableState::~TableState() = default;

void TableState::transitionTo(OrderState state)
{
    m_currentState = createState(state);
    m_currentState->action();
}

void TableState::runWorkflow(std::initializer_list<OrderState> states)
{
    runWorkflow(std::vector<OrderState>(states));
}

void TableState::runWorkflow(const std::vector<OrderState> &states)
{
    for (const auto &state : states)
    {
        transitionTo(state);
    }
}

std::unique_ptr<IState> TableState::createState(OrderState state)
{
    switch (state)
    {
    case OrderState::PLACED:
        return std::make_unique<StatePlace>();
    case OrderState::SHIPPED:
        return std::make_unique<StateShipped>();
    case OrderState::DELIVERED:
        return std::make_unique<StateDelivered>();
    case OrderState::CANCELED:
        return std::make_unique<StateCancel>();
    default:
        throw std::invalid_argument("Unsupported order state");
    }
}
