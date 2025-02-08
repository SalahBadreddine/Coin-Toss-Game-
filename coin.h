#ifndef COIN_H
#define COIN_H

#include <cstdlib>
#include <ctime>

class Coin
{
public:
    Coin();
    virtual bool toss () const = 0; // head or tails
    virtual double getValue () const = 0;
};

#endif // COIN_H
