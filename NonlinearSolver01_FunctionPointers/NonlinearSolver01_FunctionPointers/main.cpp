//
//  main.cpp
//  NonlinearSolver01_FunctionPointers
//
//  Created by wu yen sun on 2022/3/27.
//


#include <iostream>
#include <iomanip>
#include "Function01.h"
#include "NonlinearSolver01.h"
using namespace std;
using namespace fre;

int main()
{
    double Acc1 = 0.0001;
    double LEnd1 = 0.0, REnd1 = 2.0;
    double Tgt1 = 0.0, Guess1 = 1.0;
    NonlinearSolver solver(Tgt1, LEnd1, REnd1, Acc1, Guess1);
    cout << "Root of F1 by Bisect: " << fixed << setprecision(4) << solver.SolveByBisect(F1) << endl;
    cout << "Root of F1 by Newton-Raphson: " << fixed << setprecision(4)<< solver.SolveByNR(F1, DF1) << endl << endl;
    return 0;
}

/*
 Root of F1 by Bisect: 1.4142
 Root of F1 by Newton-Raphson: 1.4142

 Program ended with exit code: 0
 */
