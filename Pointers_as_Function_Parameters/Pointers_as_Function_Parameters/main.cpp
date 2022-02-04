//
//  main.cpp
//  Pointers_as_Function_Parameters
//
//  Created by wu yen sun on 2022/2/4.
//

#include <iostream>
using namespace std;

void getNum(int* iPtr) // call by pointer
{
    cin >> *iPtr; // dereference operator, assign 9 to the value at iPtr,
                  // the value of iNum will be also changed to 9
}

int main()
{
    int iNum = 1;
    getNum(&iNum);
    cout << "iNum = " << iNum << endl; // 9
    return 0;
}
