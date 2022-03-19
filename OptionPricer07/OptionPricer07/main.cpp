//
//  main.cpp
//  OptionPricer07
//
//  Created by wu yen sun on 2022/3/18.
//

#include "BinomialTreeModel02.h"
#include "Option07.h"
#include <iostream>
#include <iomanip>
using namespace std;
using namespace fre;
int main()
{
    int N = 8;
    double U = 1.15125, D = 0.86862, R = 1.00545;
    double S0 = 106.00, K = 100.00;
    BinomialTreeModel Model(S0, U, D, R);
    Call call(N, K);
    
    OptionCalculation callCalculation(&call);
    cout << "European call option price = "<< fixed << setprecision(2) << callCalculation.PriceByCRR(Model) << endl; Put put(N, K);
    
    OptionCalculation putCalculation(&put);
    cout << "European put option price = "<< fixed << setprecision(2) << putCalculation.PriceByCRR(Model) << endl;
    
    
    BinLattice CallPriceTree(N);
    cout << "American call option price = "<< fixed << setprecision(2) << callCalculation.PriceBySnell(Model, CallPriceTree) << endl;
    cout << "American call price tree:" << endl << endl;
    CallPriceTree.Display();
    
    
    BinLattice PutPriceTree(N);
    cout << "American put option price = "<< fixed << setprecision(2) << putCalculation.PriceBySnell(Model, PutPriceTree) << endl;
    cout << "American put price tree:" << endl << endl; PutPriceTree.Display();
    
    return 0;
}
/*
 

European call option price = 21.68
European put option price = 11.43
American call option price = 21.68
American call price tree:

         21.681
         12.057         32.180
          5.574         19.101         46.479
          1.875          9.578         29.464         65.132
          0.322          3.551         16.107         44.028         88.353
          0.000          0.670          6.661         26.354         63.356        115.982
          0.000          0.000          1.391         12.352         41.571         87.283        147.869
          0.000          0.000          0.000          2.889         22.574         62.281        114.907        184.657
          0.000          0.000          0.000          0.000          5.999         40.489         86.202        146.788        227.087

American put option price = 11.72
American put price tree:

         11.724
         16.734          6.517
         23.161         10.075          2.799
         30.930         15.143          4.788          0.712
         39.657         21.978          8.030          1.388          0.000
         47.585         30.530         13.113          2.704          0.000          0.000
         54.471         39.657         20.611          5.271          0.000          0.000          0.000
         60.453         47.585         30.530         10.273          0.000          0.000          0.000          0.000
         65.649         54.471         39.657         20.023          0.000          0.000          0.000          0.000          0.000

Option Destructor
Option Destructor
Program ended with exit code: 0

 */
