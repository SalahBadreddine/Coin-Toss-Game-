#include "coin10.h"

Coin10::Coin10() {}

bool Coin10 :: toss () const {
    return (std::rand() % 2) ;
}

double Coin10 :: getValue() const {
    return 10.00 ;
}


Coin10 :: ~ Coin10 () {
    delete this ;
}
