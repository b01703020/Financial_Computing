//
//  main.cpp
//  Constuctor_rules_for_derived_classes
//
//  Created by wu yen sun on 2022/2/25.
//

#include <iostream>
using namespace std;

class A
{
    public:
        A(){cout << "A:default" << endl;}
        A (int a) {cout << "A:parameter" << endl;}
};

class B : public A
{
    public:
        B (int a){cout<<"B"<<endl;}
};

class C : public A
{
    public:
        C (int a) : A(a){ cout << "C" << endl;}
};

int main()
{
    B test1(1);
    C test2(2);
    return 0;
}
