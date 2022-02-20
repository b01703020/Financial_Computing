//
//  main.cpp
//  Definite_integral_class
//
//  Created by wu yen sun on 2022/2/17.
//

#include <iostream>
#include"DefInt.h"

using namespace std;
using namespace fre;

// Integrate f(x) = x*x*x - x*x + 1 on an open interval (1.0, 2.0) through Trapzoid and Simpson

// f(x) = x*x*x - x*x + 1
double f(double x)
{
    return x*x*x-x*x+1;
}

int main()
{
    // Integrate f(x) on an open interval (1.0, 2.0) through Trapzoid and Simpson
    DefInt defint(1.0, 2.0, f);
    double N = 100;
    cout <<"When N = "<<N<<","<<endl;
    cout <<"Trapzoid= " << defint.ByTrapzoid(N)<<endl;
    cout <<"Simpson= " << defint.BySimpson(N)<<endl;
    return 0;
}
/*
 When N = 100,
 Trapzoid= 2.41673
 Simpson= 2.41667
 Program ended with exit code: 0
 
 When N = 101,
 Trapzoid= 2.41672
 Simpson= (N can't be an odd number, return the result by setting N=102 instead) 2.41667
 Program ended with exit code: 0
 */
