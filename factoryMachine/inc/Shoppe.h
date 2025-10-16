#ifndef SHOPPE_H
#define SHOPPE_H

#include "IFactory.h"

class Shoppe : public IFactory
{
public:
    Shoppe();
    ~Shoppe() override;

    void Delivery() override;
};

#endif  // SHOPPE_H
