//
//  DefInt.h
//  Definite_integral_class
//
//  Created by wu yen sun on 2022/2/20.
//

#pragma once

namespace fre
{
    class DefInt
    {
        private:
        
            double a;
            double b;
            double (*intfunc)(double);
        
        public:
        
            // Constructor with parameters
            DefInt(double a_, double b_, double (*intfunc_)(double x));
        
            // Trapzoid's rule and Simpson's rule
            double ByTrapzoid(int N) const;
            double BySimpson(int N) const;
            
            // Destructor
            ~DefInt(){}
    };
}
