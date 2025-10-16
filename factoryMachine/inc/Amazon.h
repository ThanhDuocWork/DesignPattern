#ifndef AMAZON_H
#define AMAZON_H

#include "IFactory.h"

class Amazon : public IFactory
{
public:
    Amazon();
    ~Amazon() override;

    void Delivery() override;
};

#endif  // AMAZON_H
