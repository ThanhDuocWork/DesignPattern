#ifndef LAZADA_H
#define LAZADA_H
#include "IFactory.h"
#include"Logger.h"

class Lazada : public IFactory
{
    private:

    public:
    Lazada();
    ~Lazada();
    void Delivery() override;
};

#endif