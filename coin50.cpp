#include "coin50.h"

Coin50::Coin50() {}

bool Coin50 :: toss () const {
    return (std::rand() % 2) ;
}

double Coin50 :: getValue() const {
    return 50.00 ;
}

Coin50 :: ~ Coin50 () {
    delete this ;
}
