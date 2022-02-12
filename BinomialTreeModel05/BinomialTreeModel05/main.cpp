//
//  main.cpp
//  BinomialTreeModel05
//
//  Created by wu yen sun on 2022/2/11.
//

#include <iostream>
#include "BinomialTreeModel.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using namespace fre;

int main()
{
    double u = 1.15125, d = 0.86862, r = 1.00545;
    double s0 = 106.00;
    
    if (ValidateInputData(s0, u, d, r) == -1)
        return -1;
    
    //Compute asset price at every node on the Binomial Tree
    for (int n = 0; n <= 8; n++)
    {
        for (int i = 0; i <= n; i++)
        {
            cout << "Asset Price at Binomaial Tree Node(" << n << "," << i << ") = " << fixed << setprecision(2);
            cout << CalculateAssetPrice(s0, u, d, n, i);
            cout << endl;
        }
    }
    
    return 0;
}

/*
 Input data checked
 There is no arbitrage
 Asset Price at Binomaial Tree Node(0,0) = 106.00
 Asset Price at Binomaial Tree Node(1,0) = 92.07
 Asset Price at Binomaial Tree Node(1,1) = 122.03
 Asset Price at Binomaial Tree Node(2,0) = 79.98
 Asset Price at Binomaial Tree Node(2,1) = 106.00
 Asset Price at Binomaial Tree Node(2,2) = 140.49
 Asset Price at Binomaial Tree Node(3,0) = 69.47
 Asset Price at Binomaial Tree Node(3,1) = 92.07
 Asset Price at Binomaial Tree Node(3,2) = 122.03
 Asset Price at Binomaial Tree Node(3,3) = 161.74
 Asset Price at Binomaial Tree Node(4,0) = 60.34
 Asset Price at Binomaial Tree Node(4,1) = 79.98
 Asset Price at Binomaial Tree Node(4,2) = 106.00
 Asset Price at Binomaial Tree Node(4,3) = 140.49
 Asset Price at Binomaial Tree Node(4,4) = 186.20
 Asset Price at Binomaial Tree Node(5,0) = 52.41
 Asset Price at Binomaial Tree Node(5,1) = 69.47
 Asset Price at Binomaial Tree Node(5,2) = 92.07
 Asset Price at Binomaial Tree Node(5,3) = 122.03
 Asset Price at Binomaial Tree Node(5,4) = 161.74
 Asset Price at Binomaial Tree Node(5,5) = 214.37
 Asset Price at Binomaial Tree Node(6,0) = 45.53
 Asset Price at Binomaial Tree Node(6,1) = 60.34
 Asset Price at Binomaial Tree Node(6,2) = 79.98
 Asset Price at Binomaial Tree Node(6,3) = 106.00
 Asset Price at Binomaial Tree Node(6,4) = 140.49
 Asset Price at Binomaial Tree Node(6,5) = 186.20
 Asset Price at Binomaial Tree Node(6,6) = 246.79
 Asset Price at Binomaial Tree Node(7,0) = 39.55
 Asset Price at Binomaial Tree Node(7,1) = 52.41
 Asset Price at Binomaial Tree Node(7,2) = 69.47
 Asset Price at Binomaial Tree Node(7,3) = 92.07
 Asset Price at Binomaial Tree Node(7,4) = 122.03
 Asset Price at Binomaial Tree Node(7,5) = 161.74
 Asset Price at Binomaial Tree Node(7,6) = 214.36
 Asset Price at Binomaial Tree Node(7,7) = 284.11
 Asset Price at Binomaial Tree Node(8,0) = 34.35
 Asset Price at Binomaial Tree Node(8,1) = 45.53
 Asset Price at Binomaial Tree Node(8,2) = 60.34
 Asset Price at Binomaial Tree Node(8,3) = 79.98
 Asset Price at Binomaial Tree Node(8,4) = 106.00
 Asset Price at Binomaial Tree Node(8,5) = 140.49
 Asset Price at Binomaial Tree Node(8,6) = 186.20
 Asset Price at Binomaial Tree Node(8,7) = 246.79
 Asset Price at Binomaial Tree Node(8,8) = 327.09
 */
