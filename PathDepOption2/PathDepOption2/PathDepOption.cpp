//
//  PathDepOption.cpp
//  PathDepOption1
//
//  Created by wu yen sun on 2022/4/3.
//

#include "PathDepOption.h"
#include <cmath>

namespace fre
{
    double PathDepOption::PriceByMC(const MCModel& Model, long N)
    {
        double H = 0.0, Hsq = 0.0;
        SamplePath S(m);
        for (long i = 0; i < N; i++)
        {
            Model.GenerateSamplePath(T, m, S);
            H = (i * H + Payoff(S)) / (i + 1.0);
            Hsq = (i * Hsq + pow(Payoff(S), 2.0)) / (i + 1.0);
        }
        Price = exp(-Model.GetR() * T) * H;
        PricingError = exp(-Model.GetR() * T) * sqrt(Hsq - H * H) / sqrt(N - 1.0);
        return Price;
    }
    
    double ArthmAsianCall::Payoff(const SamplePath& S) const
    {
        double Ave = 0.0;
        for (int k = 0; k < m; k++) Ave = (k * Ave + S[k]) / (k + 1.0);
        if (Ave < K) return 0.0;
        return Ave - K;
    }

}
