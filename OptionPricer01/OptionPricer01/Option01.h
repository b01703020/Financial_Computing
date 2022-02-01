//
//  Option01.h
//  OptionPricer01
//
//  Created by wu yen sun on 2022/2/1.
//

#pragma once
namespace fre
{
    //pricing European option
    double PriceByCRR(double S0, double U, double D, double R,int N, double K);
    
    //computing call payoff
    double CallPayoff(double z, double K);

    //computing factorial
    double fact(int k);
}
