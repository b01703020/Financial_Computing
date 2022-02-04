//
//  main.cpp
//  Pointers_to_Constant_vs_Constant_Pointer
//
//  Created by wu yen sun on 2022/2/4.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    // Pointer to Constant
    // cannot change the value that is pointed at.
    // But the pointer variable itself (the address pointed by the pointer) is changeable.
    const double dTaxRates[] = {0.65, 0.8, 0.75};
    const double *rates = dTaxRates;
    
    // Constant Pointer
    // address in pointer cannot change once pointer is initialized.
    // But the content pointed by the pointer is changeable.
    int classSize = 24;
    int * const ptr = &classSize;
    
    return 0;
}
