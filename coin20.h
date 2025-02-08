#ifndef COIN20_H
#define COIN20_H

#include "coin.h"

class Coin20 : public Coin
{
public:
    Coin20();
    bool toss () const override ;
    double getValue () const override ;
    ~ Coin20 () ;
};

#endif // COIN20_H
