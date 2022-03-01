//
//  Strangle_Butterfly.h
//  OptionPricer05_strangle_butterfly
//
//  Created by wu yen sun on 2022/2/28.
//

#pragma once
#include "Option05.h"
namespace fre
{
    class Strangle : public EurOption
    {
        private:
            double K1;
            double K2;
        public:
            Strangle(int N_, double K1_, double K2_) : EurOption(N_), K1(K1_), K2(K2_) {};
            ~Strangle() {}
            double Payoff(double z) const;
    };

    class Butterfly : public EurOption
    {
        private:
            double K1;
            double K2;
        public:
            Butterfly(int N_, double K1_, double K2_) : EurOption(N_), K1(K1_), K2(K2_) {};
            ~Butterfly() {}
            double Payoff(double z) const;
    };

}

