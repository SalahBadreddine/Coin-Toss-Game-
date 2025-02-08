#include "coin20.h"

Coin20::Coin20() {}

bool Coin20 :: toss () const {
    return (std::rand() % 2) ;
}


double Coin20 :: getValue() const {
    return 20.00 ;
}

Coin20 :: ~ Coin20 () {
    delete this ;
}
