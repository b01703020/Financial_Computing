//
//  main.cpp
//  PathDepOption3_gamma_v2
//
//  Created by wu yen sun on 2022/4/6.
//

#include <iostream>
#include "PathDepOption.h"
#include "GmtrAsianCall.h"

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
    double epsilon =0.001;
    Option.PriceByMC(Model,N,epsilon);
    cout << "Arithmetic Asian Call by direct Monte Carlo = " << Option.GetPrice() << endl << "Error = " << Option.GetPricingError() << endl << "delta = " << Option.GetDelta() << endl<< "gamma = " << Option.GetGamma() << endl;

    return 0;
}
/*
 Arithmetic Asian Call by direct Monte Carlo = 1.40805
 Error = 0.0119527
 delta = 0.522444
 gamma = 0.115284
 Program ended with exit code: 0

*/
