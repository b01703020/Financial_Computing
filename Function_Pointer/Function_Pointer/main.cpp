//
//  main.cpp
//  Function_Pointer
//
//  Created by wu yen sun on 2022/2/14.
//

#include <iostream>
using namespace std;

int addition(int a, int b)
{
    return a+b;
}

int main()
{
    int x  = 1, y = 2;
    int (*fp) (int, int) = addition;
    int result = fp(x,y);
    cout << "Addition of x and y = " << result << endl;
    return 0;
}
