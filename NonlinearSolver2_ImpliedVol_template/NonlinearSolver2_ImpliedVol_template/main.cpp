//
//  main.cpp
//  NonlinearSolver2_ImpliedVol_template
//
//  Created by wu yen sun on 2022/4/8.
//

#include <iostream>
#include <iomanip>
#include "Function03.h"
#include "NonlinearSolver03.h"
#include "EurCall.h"
using namespace std;
using namespace fre;

int main()
{
    double S0 = 100.0;
    double r = 0.1;
    double T = 1.0;
    double K = 100.0;
    Intermediary Call(S0, r, T, K);
    
    double Acc = 0.0001;
    double LEnd = 0.01, REnd = 1.0;
    double Tgt = 12.56;
    double Guess = 0.23;
    
    NonlinearSolver<Intermediary> solver(Tgt, LEnd, REnd, Acc, Guess);
    cout << "Implied Volatility by Bisect: " << fixed << setprecision(4)
    << solver.SolveByBisect(&Call) << endl;
    cout << "Implied Volatility by Newton-Raphson: " << fixed << setprecision(4)
    << solver.SolveByNR(&Call) << endl;
    
    return 0;
}

/*
Implied Volatility by Bisect: 0.1784
Implied Volatility by Newton-Raphson: 0.1784
*/
