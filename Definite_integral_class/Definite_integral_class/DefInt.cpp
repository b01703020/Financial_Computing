//
//  DefInt.cpp
//  Definite_integral_class
//
//  Created by wu yen sun on 2022/2/20.
//

#include"DefInt.h"
#include<iostream>

using namespace std;

namespace fre
{
    DefInt::DefInt(double a_, double b_, double (*intfunc_)(double x)):a(a_),b(b_),intfunc(intfunc_){};

    double DefInt :: ByTrapzoid(int N) const
    {
        double temp = intfunc(a);
        for (int k=1; k<N; k++)
        {
            temp+=2*intfunc(a+(b-a)*k/N);
        }
        temp = ((b-a)/2/N) * (temp+intfunc(b));
        return temp;
    }

    double DefInt :: BySimpson(int N) const
    {
        // Check N is an even number
        if (N%2==1)
        {
            cerr << "(N can't be an odd number, return the result by setting N=" << N+1 << " instead) " ;
            N+=1;
        }
        
        double temp = 0;
        for (int k=1; k<=N/2; k++)
        {
            temp+=(intfunc(a+((2*k-2)*(b-a)/N)) + 4*intfunc(a+((2*k-1)*(b-a)/N)) + intfunc(a+((2*k)*(b-a)/N)));
        }
        
        temp = ((b-a)/3/N) * temp;
        return temp;
        
    }
}

