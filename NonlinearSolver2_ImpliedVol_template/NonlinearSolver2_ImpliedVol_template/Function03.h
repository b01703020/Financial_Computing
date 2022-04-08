//
//  Function02.h
//  NonlinearSolver02_Polymorphism
//
//  Created by wu yen sun on 2022/3/27.
//

#pragma once
namespace fre
{

    class F1
    {
        public:
            double Value(double x);
            double Deriv(double x);
    };
    
    class F2
    {
        private:
            double a; //any real number
        public:
            F2(double a_) { a = a_; }
            double Value(double x);
            double Deriv(double x);
    };
}
