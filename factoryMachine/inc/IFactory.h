#ifndef I_FACTORY_H
#define I_FACTORY_H
#include<iostream>
#include<string>
#include"Logger.h"

class IFactory
{
    public:
    virtual void Delivery () = 0;
};
#endif