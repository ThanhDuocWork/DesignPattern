#ifndef ISTATE_h
#define ISTATE_h
#include<iostream>
#include<string>
#include"Logger.h"
class IState 
{
    private:

    public:
    virtual void action() = 0;

};
#endif