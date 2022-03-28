//
//  main.cpp
//  NonlinearSolver2_BondYield
//
//  Created by wu yen sun on 2022/3/27.
//

#include <iostream>
#include <iomanip>
#include "Function02.h"
#include "NonlinearSolver02.h"
using namespace std;
using namespace fre;

int main()
{
    double F=100.0;
    double T=3.0;
    double C=1.2;
    double P=98.56;

    double Acc=0.0001;
    double LEnd=0.0;
    double REnd=1.0;
    double Guess=0.2;
    
    
    NonlinearSolver solver(P, LEnd, REnd, Acc, Guess);
    
    F1 MyF1(T,C,F);
    cout << "Yield by bisection method: " << fixed << setprecision(4)<< solver.SolveByBisect(&MyF1) << endl;
    cout << "Yield by Newton-Raphson method: " << fixed << setprecision(4)<< solver.SolveByNR(&MyF1) << endl;
    
    return 0;
}

/*
 Yield by bisection method: 0.0168
 Yield by Newton-Raphson method: 0.0168
 Program ended with exit code: 0
 */
