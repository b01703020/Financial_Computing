//
//  Option04.h
//  OptionPricer04
//
//  Created by wu yen sun on 2022/2/25.
//

#pragma once
#include "BinomialTreeModel02.h"

namespace fre
{
    class Call
    {
        private:
            int N;
            double K;
        public:
            Call():N(0),K(0){}
            Call(int _N, double _K):N(_N),K(_K){}
            Call(const Call & call):N(call.N),K(call.K){}
            ~Call(){}
            int GetN() const { return N; }
            double Payoff(double z) const;
    };

    class OptionCalculation
    {
        private:
            Call* pOption;
        
            OptionCalculation() : pOption(0) {}
            OptionCalculation(const OptionCalculation& optionCalculation): pOption(optionCalculation.pOption) {}
        public:
            OptionCalculation(Call* pOption_) : pOption(pOption_) {}
            ~OptionCalculation() {}
            double PriceByCRR(const BinomialTreeModel& Model);
    };


}
