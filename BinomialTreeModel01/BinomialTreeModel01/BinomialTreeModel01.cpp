//
//  BinomialTreeModel01.cpp
//  BinomialTreeModel01
//
//  Created by wu yen sun on 2022/1/28.
//

// Calculate asset price at a specific node on the Binomial Tree
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double u = 1.15125, d = 0.86862;
    double s0 = 106.00;
    
    // compute asset price at node n=3, i=2
    int n = 3;
    int i = 2;
    cout << "Asset Price at Binomial Tree Node(" << n << "," << i << ") = " << fixed << setprecision(2);
    cout << s0 * pow(u,i) * pow(d,n-i);
    cout << endl;
    return 0;
}
