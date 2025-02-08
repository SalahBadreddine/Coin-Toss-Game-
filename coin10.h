#ifndef COIN10_H
#define COIN10_H

#include "coin.h"

class Coin10 : public Coin
{
public:
    Coin10();
    bool toss () const override ;
    double getValue() const override ;
    ~ Coin10 () ;
};

#endif // COIN10_H
