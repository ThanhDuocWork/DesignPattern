#ifndef AMAZON_H
#define AMAZON_H
#include"IFactory.h"
#include"Logger.h"

class Amazon : public IFactory
{
    private:

    public:
    Amazon();
    ~Amazon();
    void Delivery() override;
};
#endif