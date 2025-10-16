#include <exception>
#include <iostream>
#include <vector>

#include "Parameter.h"
#include "tableFactory.h"
#include "tableState.h"

void demoFactoryPattern()
{
    std::cout << "\n=== Factory Pattern Demo ===" << std::endl;
    const std::vector<std::string> platforms = {"Amazon", "Lazada", "Shoppe"};

    for (const auto &platform : platforms)
    {
        auto factory = TableFactory::createFactory(platform);
        std::cout << "Dispatching order via " << platform << std::endl;
        factory->Delivery();
    }
}

void demoStatePattern()
{
    std::cout << "\n=== State Pattern Demo ===" << std::endl;
    TableState orderWorkflow;
    orderWorkflow.runWorkflow({OrderState::PLACED, OrderState::SHIPPED, OrderState::DELIVERED});

    std::cout << "\nReplaying with a canceled order" << std::endl;
    TableState canceledWorkflow;
    canceledWorkflow.runWorkflow({OrderState::PLACED, OrderState::CANCELED});
}

int main()
{
    try
    {
        demoFactoryPattern();
        demoStatePattern();
    }
    catch (const std::exception &ex)
    {
        std::cerr << "Unexpected error: " << ex.what() << std::endl;
        return 1;
    }

    return 0;
}
