//
//  main.cpp
//  OptionPricer08_replicating_strategy
//
//  Created by wu yen sun on 2022/3/19.
//

#include "BinomialTreeModel02.h"
#include "Option08.h"
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
using namespace fre;

int main()
{
    int N = 8;
    double U = 1.15125, D = 0.86862, R = 1.00545;
    double S0 = 106.00, K = 100.00;
    BinomialTreeModel Model(S0, U, D, R);
    ofstream fout;
    fout.open("Results.txt");
    
    BinLattice<double> PriceTree;
    BinLattice<double> XTree;
    BinLattice<double> YTree;
    
    
    Call call(N, K);
    OptionCalculation callCalculation(&call);
    fout << "European call prices by PriceByCRR:"<< fixed << setprecision(3) << callCalculation.PriceByCRR(Model) << endl << endl;
    
    fout << "European call prices by HW6 PriceByCRR:"<< fixed << setprecision(3) << callCalculation.PriceByCRR(Model, PriceTree, XTree, YTree) << endl << endl;
    
    fout << "Stock positions in replicating strategy:" << endl << endl;
    XTree.Display(fout);
    
    fout << "Money market account positions in replicating strategy:" << endl << endl;
    YTree.Display(fout);
    
    
    Put put(N, K);
    OptionCalculation putCalculation(&put);
    
    fout << "European put prices by PriceByCRR:"<< fixed << setprecision(3) << putCalculation.PriceByCRR(Model) << endl << endl;
    
    fout << "European call prices by HW6 PriceByCRR:"<< fixed << setprecision(3) << putCalculation.PriceByCRR(Model, PriceTree, XTree, YTree) << endl << endl;
    
    fout << "Stock positions in replicating strategy:" << endl << endl;
    XTree.Display(fout);
    
    fout << "Money market account positions in replicating strategy:" << endl << endl;
    YTree.Display(fout);
    
    return 0;
}


/*
 European call prices by PriceByCRR:21.681

 European call prices by HW6 PriceByCRR:21.681

 Stock positions in replicating strategy:

           0.672
           0.520          0.794
           0.341          0.664          0.898
           0.164          0.483          0.810          0.970
           0.039          0.265          0.657          0.932          1.000
           0.000          0.071          0.421          0.847          1.000          1.000
           0.000          0.000          0.128          0.657          1.000          1.000          1.000
           0.000          0.000          0.000          0.231          1.000          1.000          1.000          1.000
           0.000          0.000          0.000          0.000          0.000          0.000          0.000          0.000          0.000

 Money market account positions in replicating strategy:

         -49.518
         -35.611        -64.336
         -21.444        -50.706        -78.860
          -9.393        -34.285        -68.204        -90.215
          -2.003        -17.268        -52.418        -85.024        -95.745
           0.000         -4.138        -31.259        -74.963        -95.745        -95.745
           0.000          0.000         -8.547        -55.460        -95.745        -95.745        -95.745
           0.000          0.000          0.000        -17.654        -95.745        -95.745        -95.745        -95.745
           0.000          0.000          0.000          0.000          0.000          0.000          0.000          0.000          0.000

 European put prices by PriceByCRR:11.426

 European call prices by HW6 PriceByCRR:11.426

 Stock positions in replicating strategy:

          -0.328
          -0.480         -0.206
          -0.659         -0.336         -0.102
          -0.836         -0.517         -0.190         -0.030
          -0.961         -0.735         -0.343         -0.068          0.000
          -1.000         -0.929         -0.579         -0.153          0.000          0.000
          -1.000         -1.000         -0.872         -0.343          0.000          0.000          0.000
          -1.000         -1.000         -1.000         -0.769          0.000          0.000          0.000          0.000
           0.000          0.000          0.000          0.000          0.000          0.000          0.000          0.000          0.000

 Money market account positions in replicating strategy:

          46.227
          60.134         31.409
          74.301         45.039         16.885
          86.352         61.460         27.541          5.530
          93.742         78.477         43.327         10.721          0.000
          95.745         91.607         64.486         20.782          0.000          0.000
          95.745         95.745         87.198         40.285          0.000          0.000          0.000
          95.745         95.745         95.745         78.091          0.000          0.000          0.000          0.000
           0.000          0.000          0.000          0.000          0.000          0.000          0.000          0.000          0.000


 */
