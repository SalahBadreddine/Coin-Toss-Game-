#ifndef COIN50_H
#define COIN50_H

#include "coin.h"

class Coin50 : public Coin
{
public:
    Coin50();
    bool toss () const  override ;
    double getValue () const override ;
    ~ Coin50 () ;
};

#endif // COIN50_H
