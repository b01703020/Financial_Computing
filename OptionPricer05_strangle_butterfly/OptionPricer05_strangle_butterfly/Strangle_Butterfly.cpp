//
//  Strangle_Butterfly.cpp
//  OptionPricer05_strangle_butterfly
//
//  Created by wu yen sun on 2022/2/28.
//

#include "Strangle_Butterfly.h"
namespace fre
{
    double Strangle::Payoff(double z) const
    {
        if (z <= K1) return K1-z;
        if (K1 < z && z <= K2) return 0.0;
        return z-K2;
    }

    double Butterfly::Payoff(double z) const
    {
        if (K1 < z && z <= (K1+K2)/2) return z-K1;
        if ((K1+K2)/2 < z && z <= K2) return K2-z;
        return 0;
    }
}
