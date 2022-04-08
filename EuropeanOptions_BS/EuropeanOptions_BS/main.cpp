//
//  main.cpp
//  EuropeanOptions_BS
//
//  modified by wu yen sun on 2022/3/29.
//

// TestEuropeanOption.cpp
// Test program for the exact solutions of European options.
// (C) Datasim Component Technology BV 2003-2006
//

#include <iostream>
#include "EuropeanOption.h"

int main()
{
    double U = 50.0;
    double K = 50.0;
    double T = 3.0/12.0;
    double r = 0.10;
    double sig = 0.30;
    double q = 0.0;
    double b = r - q;

    EuropeanOption callOption;
    cout << "Q1: "<< callOption.GetOptType() << " option on a stock: " << callOption.Price() << endl;

    char optType[2] = "P";
    EuropeanOption putOption(r, sig, K, T, U, b, optType);
    cout << "Q2: " << putOption.GetOptType() << " option on a stock: " << putOption.Price() << endl;

    putOption.SetConstantDiv(1.5, 2.0/12);
    cout << "Q3: " << putOption.GetOptType() << " option with dividend: " << putOption.Price() << endl;
    
    return 0;
}


/*
 Q1: Call option on a stock: 2.13293
 Q2: Put option on a stock: 2.37561
 Q3: Put option with dividend: 3.03039
 Program ended with exit code: 0
 */

