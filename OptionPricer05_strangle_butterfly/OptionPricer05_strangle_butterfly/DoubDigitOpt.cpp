//
//  DoubDigitOpt.cpp
//  OptionPricer05_strangle_butterfly
//
//  Created by wu yen sun on 2022/2/28.
//

#include "DoubDigitOpt.h"
namespace fre
{
    double DoubDigitOpt::Payoff(double z) const
    {
        if (K1 < z && z < K2) return 1.0;
        return 0.0;
    }
}
