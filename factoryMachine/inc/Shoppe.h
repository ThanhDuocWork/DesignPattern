#ifndef SHOPPE_H
#define SHOPPE_H
#include"IFactory.h"
#include"Logger.h"

class Shoppe : public IFactory
{
    private:

    public:
    Shoppe();
    ~Shoppe();
    void Delivery() override;
};
#endif