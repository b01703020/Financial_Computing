//
//  Function02.cpp
//  NonlinearSolver02_Polymorphism
//
//  Created by wu yen sun on 2022/3/27.
//

#include "Function02.h"
#include <cmath>
namespace fre
{
    double F1::Value(double x)
    {
        double value = 0.0;
        
        for(int t=1; t<=T; t++)
        {
            value += C*exp(-x*t);
        }
        
        value += F*exp(-x*T);
        
        return value;
    }

    double F1::Deriv(double x)
    {
        double deriv = 0.0;
        
        for(int t=1; t<=T; t++)
        {
            deriv += -t*C*exp(-x*t);
        }
        
        deriv += -T*F*exp(-x*T);
        
        return deriv;
    }
}
