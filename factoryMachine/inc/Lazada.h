#ifndef LAZADA_H
#define LAZADA_H

#include "IFactory.h"

class Lazada : public IFactory
{
public:
    Lazada();
    ~Lazada() override;

    void Delivery() override;
};

#endif  // LAZADA_H
