//
//  Option03.h
//  OptionPricer03
//
//  Created by wu yen sun on 2022/2/22.
//

#pragma once
#include "BinomialTreeModel02.h"

namespace fre
{
    //inputting and displaying option data int
    int GetInputData(int& N, double& K);

    //pricing European option
    double * PriceByCRR(const BinomialTreeModel & Model, int N, double K,
    double (*Payoff)(double z, double K));

    //computing Call Payoff
    double CallPayoff(double z, double K);

    //computing Put Payoff
    double PutPayoff(double z, double K);
}
