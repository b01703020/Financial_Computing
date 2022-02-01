//
//  main.cpp
//  RefvsVal
//
//  Created by wu yen sun on 2022/2/1.
//

#include <iostream>
using namespace std;
void Foo(int a, int& b)
{
    a++;
    b++;
    cout << "In Function Foo a = " << a << " and b = " << b << endl;
}

int main()
{
    int x = 1, y = 1;
    Foo(x, y);
    cout << "In main function x = " << x << " and y = " << y << endl;
    return 0;
}
