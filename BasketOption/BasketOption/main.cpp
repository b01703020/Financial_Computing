//
//  main.cpp
//  BasketOption
//
//  Created by wu yen sun on 2022/4/7.
//

#include <iostream>
#include "PathDepOption02.h"

using namespace std;
using namespace fre;
int main()
{
    int d=3;
    double r=0.03;
    
    Vector S0(d);
    S0[0]=40.0;
    S0[1]=60.0;
    S0[2]=100.0;
    cout << S0 <<endl;
    
    Matrix C(d);
    for(int i=0;i<d;i++) C[i].resize(d);
    C[0][0] =  0.1;  C[0][1] = -0.1;  C[0][2] = 0.0;
    C[1][0] = -0.1;  C[1][1] =  0.2;  C[1][2] = 0.0;
    C[2][0] =  0.0;  C[2][1] =  0.0;  C[2][2] = 0.3;
    cout << C << endl;
    
    MCModel Model(S0,r,C);

    double T=1.0/12.0, K=200.0;
    int m=30;
    ArthmAsianCall Option(T,K,m);

    long N=3000;
    cout << "Arithmetic Basket Call Price = " << Option.PriceByMC(Model, N) << endl;

    return 0;
}
/*
 40   60   100

 0.1   -0.1   0
 -0.1   0.2   0
 0   0   0.3


 Arithmetic Basket Call Price = 2.19407
 Program ended with exit code: 0
*/
