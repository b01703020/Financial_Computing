//
//  Function02.h
//  NonlinearSolver2_BondYield
//
//  Created by wu yen sun on 2022/3/27.
//

#pragma once
namespace fre
{
    class Function
    {
        public:
            virtual double Value(double x) = 0;
            virtual double Deriv(double x) = 0;
            virtual ~Function() {}
    };

    class F1 : public Function
    {
    private:
        int T;
        double C;
        double F;
        
    public:
        F1(int T_, double C_, double F_): T(T_), C(C_), F(F_) {}
        double Value(double x);
        double Deriv(double x);
        ~ F1(){}
    };
    
}
