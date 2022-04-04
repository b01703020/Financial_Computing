//
//  main.cpp
//  PathDepOption3
//
//  Created by wu yen sun on 2022/4/3.
//

#include <iostream>
#include "PathDepOption.h"

using namespace std;
using namespace fre;

int main()
{
    double S0=100.0, r=0.03, sigma=0.2;
    MCModel Model(S0,r,sigma);
    
    double T =1.0/12.0, K=100.0;
    int m=30;
    ArthmAsianCall Option(T,K,m);
    
    long N=30000;
    double epsilon = 0.001;
    Option.PriceByMC(Model,N, epsilon);
    
    cout << "Arithmetic Asian Call by direct Monte Carlo = " << Option.GetPrice() << endl
    << "Pricing Error = " << Option.GetPricingError() << endl << "delta = " << Option.GetDelta() << endl;
    return 0;;
}

/*
 Arithmetic Asian Call by direct Monte Carlo = 1.4551
 Pricing Error = 0.012141
 delta = 0.530254
 Program ended with exit code: 0
 */
