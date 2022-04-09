//
//  main.cpp
//  PathDepOption4_VarianceReduction_delta
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
    GmtrAsianCall  CVOption(T,K,m);

    long N=30000;
    double epsilon =0.001;
    Option.PriceByVarRedMC(Model,N,CVOption,epsilon);
    cout << "Arithmetic call price = " << Option.GetPrice() << endl
        << "Error = " << Option.GetPricingError() << endl << "delta = " << Option.GetDelta() << endl<< endl;

    Option.PriceByMC(Model,N,epsilon);
    cout << "Price by direct MC = " << Option.GetPrice() << endl
        << "Error = " << Option.GetPricingError() << endl << "delta = " << Option.GetDelta() << endl<< endl;

    return 0;
}
/*
 Arithmetic call price = 1.42606
 Error = 0.000138375
 delta = 0.519747

 Price by direct MC = 1.44063
 Error = 0.0121372
 delta = 0.528206

 Program ended with exit code: 0

*/

