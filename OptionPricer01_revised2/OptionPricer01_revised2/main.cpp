//
//  main.cpp
//  OptionPricer01_revised2
//
//  Created by wu yen sun on 2022/4/10.
//

#include "BinomialTreeModel.h"
#include "Option01.h"
#include <iostream>
#include <iomanip>
using namespace std;
using namespace fre;

int main()
{
    double u = 1.15125, d = 0.86862, r = 1.00545;
    double s0 = 106.00;
    double k = 100.00;
    const int N = 8;

    cout << "u = " << u << " d = " << d << " r = " << r << endl;
    cout << "s0 = " << s0 << " k = " << k << endl;
    cout << "N = " << N << endl << endl;

    double optionPrice = PriceByCRR(s0, u, d, r, N, k);
    cout << "European call option price = " << fixed << setprecision(2) << optionPrice << endl << endl;
    
    cout << "Calculate European call option price by HW1 Function: "
        << fixed << setprecision(2) << HW1PriceByCRR(s0, u, d, r, N, k)
        << endl << endl;

    cout << "Calculate European call option price by HW1 Function V2: "
        << fixed << setprecision(2) << HW1V2PriceByCRR(s0, u, d, r, N, k)
        << endl << endl;

    return 0;
}
/*
u = 1.15125 d = 0.86862 r = 1.00545
s0 = 106 k = 100
N = 8

European call option price = 21.68

Calculate European call option price by HW1 Function: 21.68

Calculate European call option price by HW1 Function V2: 21.68

*/
