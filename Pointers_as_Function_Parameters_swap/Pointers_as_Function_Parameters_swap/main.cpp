//
//  main.cpp
//  Pointers_as_Function_Parameters_swap
//
//  Created by wu yen sun on 2022/2/4.
//

#include <iostream>
using namespace std;


void MySwap_pointer(int *iPtrX, int *iPtrY)
{
    int iTemp;
    iTemp = *iPtrX;
    *iPtrX = *iPtrY;
    *iPtrY = iTemp;
}


void MySwap_reference(int &iPtrX, int &iPtrY)
{
    int iTemp;
    iTemp = iPtrX;
    iPtrX = iPtrY;
    iPtrY = iTemp;
}


int main()
{
    
    int iNum1 = 2, iNum2 = -3;
    
    MySwap_pointer(&iNum1, &iNum2);
    cout << iNum1 << "," << iNum2 <<endl;
    
    MySwap_reference(iNum1, iNum2);
    cout << iNum1 << "," << iNum2 <<endl;
    return 0;
    
}
