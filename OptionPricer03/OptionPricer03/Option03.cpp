//
//  Option03.cpp
//  OptionPricer03
//
//  Created by wu yen sun on 2022/2/22.
//

#include "Option03.h"
#include "BinomialTreeModel02.h"
#include <iostream>
#include <cmath>
using namespace std;

namespace fre
{
    int GetInputData(int& N, double& K)
    {
        cout << "Enter steps to expiry N: ";cin >> N;
        cout << "Enter strike price K: ";cin >> K;
        return 0;
    }

    double * PriceByCRR(const BinomialTreeModel & Model, int N, double K, double (*Payoff)(double z, double K))
    {
        double q = Model.RiskNeutProb();
        
        double *Price = new double[N+1];
        memset(Price, 0, N+1); //Sets the first num bytes of the block of memory pointed by ptr to the specified value
        
        for (int i = 0; i <= N; i++)
        {
            Price[i] = Payoff(Model.CalculateAssetPrice(N, i), K);
        }
        
        for (int n = N - 1; n >= 0; n--)
        {
            for (int i = 0; i <= n; i++)
            {
                Price[i] = (q * Price[i + 1] + (1 - q) * Price[i]) / Model.GetR();
            }
        }
        
        return Price;
    }

    double CallPayoff(double z, double K)
    {
        if (z > K) return z - K;
        return 0.0;
    }
    
    double PutPayoff(double z, double K)
    {
        if (z < K) return K - z;
        return 0.0;
    }
}
