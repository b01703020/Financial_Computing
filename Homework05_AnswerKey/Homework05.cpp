// 9_Homework05.cpp
//
#include <iostream>
#include <iomanip>
#include "BinomialTreeModel02.h"
#include "Option05.h"
#include "DoubDigitOpt.h"
#include "SpreadOptions.h"

using namespace std;
using namespace fre;
int main()
{
    int N = 8;
    double U = 1.15125, D = 0.86862, R = 1.00545;
    double S0 = 106.00, K1 = 100.00, K2 = 110.00;

    BinomialTreeModel Model(S0, U, D, R);

    DoubDigitOpt option1(N, K1, K2);
    OptionCalculation option1Calculation(&option1);
    cout << "European double digit option price = "
        << fixed << setprecision(2) << option1Calculation.PriceByCRR(Model) << endl;

    StrangleOpt option2(N, K1, K2);
    OptionCalculation option2Calculation(&option2);
    cout << "European strangle option price = "
        << fixed << setprecision(2) << option2Calculation.PriceByCRR(Model) << endl;

    ButterflyOpt option3(N, K1, K2);
    OptionCalculation option3Calculation(&option3);
    cout << "European butterfly option price = "
        << fixed << setprecision(2) << option3Calculation.PriceByCRR(Model) << endl;

    return 0;
}

/*
European double digit option price = 0.26
European strangle option price = 28.39
European butterfly option price = 1.04
*/
