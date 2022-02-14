//
//  Options02.h
//  OptionPrcier02
//
//  Created by wu yen sun on 2022/2/11.
//

#pragma once
namespace fre
{
    //inputting and displaying option data
    int GetInputData(int& N, double& K);

    //pricing European option
    double * PriceByCRR(double S0, double U, double D, double R, int N, double K, double (*Payoff)(double z, double K));
    
    //computing Call Payoff
    double CallPayoff(double z, double K);
    
    //computing Put Payoff
    double PutPayoff(double z, double K);
}
