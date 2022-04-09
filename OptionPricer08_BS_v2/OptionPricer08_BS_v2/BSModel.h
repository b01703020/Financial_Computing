#pragma once
#include "BinomialTreeModel02.h"
#include <cmath>
using namespace std;
namespace fre {
    class BSModel
    {
    private:
        double S0, r, sigma;
    public:
        BSModel(double S0_, double r_, double sigma_)
        {
            S0 = S0_; r = r_; sigma = sigma_;
        }
        BinomialTreeModel ApproxBinModel(double h)
        {
            double U = exp(sigma * sqrt(h));
            double D = 1 / U;
            double R = exp(r * h);
            BinomialTreeModel ApproxModel(S0, U, D, R);
            return ApproxModel;
        }
    };
}
