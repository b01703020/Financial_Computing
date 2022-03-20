//
//  main.cpp
//  OptionPricer08_BS
//
//  Created by wu yen sun on 2022/3/19.
//

#include "BinomialTreeModel02.h"
#include "Option08.h"
#include <iostream>
#include <iomanip>

using namespace std;
using namespace fre;

int main()
{
    double S0=106.0;
    double r=0.058;
    double sigma=0.46;
    double T=(double)9/12;
    double K=100.0;
    int N=8;

    BinomialTreeModel Model(S0, r, sigma, T, N);
    cout << setiosflags(ios::fixed) << setprecision(5) << "S0 = " << S0 << endl << "r = " << r << endl << "sigma = " << sigma << endl << "T = " << T << endl << "K = " << K << endl << "N = " << N << endl << endl << "U = " << Model.GetU() << endl << "D = " << Model.GetD() <<endl << "R = " << Model.GetR() << endl << endl;
    
    Call call(N, K);
    OptionCalculation callCalculation(&call);
    BinLattice<double> CallPriceTree(T,N);
    cout << "American call option price = " << fixed << setprecision(3) << callCalculation.PriceBySnell(Model, CallPriceTree) << endl;

    return 0;
}

/*
 S0 = 106.00000
 r = 0.05800
 sigma = 0.46000
 T = 0.75000
 K = 100.00000
 N = 8

 U = 1.15125
 D = 0.86862
 R = 1.00545

 American call option price = 21.682
 Program ended with exit code: 0
 */
