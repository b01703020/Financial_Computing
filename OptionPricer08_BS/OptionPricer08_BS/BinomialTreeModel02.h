//
//  BinomialTreeModel.h
//  OptionPricer08_BS
//
//  Created by wu yen sun on 2022/3/19.
//
#include <math.h>

#pragma once
namespace fre
{
    class BinomialTreeModel
    {
        private:
        
            double S0;
            double U;
            double D;
            double R;
        
        public:

            BinomialTreeModel(): S0(0), U(0), D(0), R(0) {}
            BinomialTreeModel(double S0_, double R_, double sigma_, double T_, int N_):S0(S0_), U(exp(sigma_*sqrt(T_/N_))), D(exp(-sigma_*sqrt(T_/N_))), R(exp(R_*T_/N_)) {}
            BinomialTreeModel(const BinomialTreeModel& B):S0(B.S0), U(B.U), D(B.D), R(B.R) {}
            ~BinomialTreeModel() {}
        
            double RiskNeutProb() const;
        
            double CalculateAssetPrice(int n, int i) const;
        
            void UpdateBinomialTreeModel(double S0_, double U_, double D_, double R_);
        
            int ValidateInputData() const;
        
            int GetInputData();
        
            double GetS0() const { return S0; }
            double GetU() const { return U; }
            double GetD() const { return D; }
            double GetR() const { return R; }
    };
}

