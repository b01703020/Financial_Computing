//
//  main.cpp
//  OptionPricer06
//
//  Created by wu yen sun on 2022/3/16.
//

#include "BinomialTreeModel02.h"
#include "Options06.h"
#include <iostream>
#include <iomanip>

using namespace std;
using namespace fre;

int main()
{
    int N = 8;
    double U = 1.15125, D = 0.86862, R = 1.00545;
    double S0 = 106.00, K = 100.00;
    
    BinomialTreeModel Model(S0, U, D, R);
    
    Call call(N, K);
    OptionCalculation callCalculation(&call);
    cout << "European call option price = " << fixed << setprecision(2) << callCalculation.PriceByCRR(Model) << endl;
    
    Put put(N, K);
    OptionCalculation putCalculation(&put);
    cout << "European put option price = " << fixed << setprecision(2) << putCalculation.PriceByCRR(Model) << endl;
    
    cout << "American call option price = "<< fixed << setprecision(2) << callCalculation.PriceBySnell(Model) << endl;
    
    cout << "American put option price = "<< fixed << setprecision(2) << putCalculation.PriceBySnell(Model) << endl;
    
    return 0;
    
}

/*
 European call option price = 21.68
 European put option price = 11.43
 American call option price = 21.68
 American put option price = 11.72
 Program ended with exit code: 0
 */
