//
//  GmtrAsianCall.h
//  PathDepOption4_VarianceReduction
//
//  Created by wu yen sun on 2022/4/5.
//

#pragma once
#include "PathDepOption.h"
namespace fre
{
    class GmtrAsianCall : public PathDepOption
    {
        public:
            GmtrAsianCall(double T_, double K_, int m_) : PathDepOption(T_, K_, m_) {}
            double Payoff(const SamplePath& S) const;
            double PriceByBSFormula(const MCModel& Model);
    };
}
