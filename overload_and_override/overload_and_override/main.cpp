//
//  main.cpp
//  overload_and_override
//
//  Created by wu yen sun on 2022/3/20.
//
#include <iostream>
using namespace std;

class Point
{
    protected:
        int x, y;
    public:
        void set(int a, int b) {x=a; y=b;}
        void print(){cout<<"From A"<<endl;}
};


class Circle : public Point
{
    private:
        double r;
    public:
        void set (int a, int b, double c)
        {
            Point :: set(a, b); //same name function call r = c;
        }
        void print(){cout<<"From B"<<endl;}
};

int main()
{
    Point A;
    A.set(30,50); // from base class Point
    A.print(); // from base class Point
    
    Circle C;
    C.Point::set(10,10); // due to hidden
    C.set(10,10,100); // from class Circle
    C.print(); // from class Circle
    
    return 0;
}

/*
 From A
 From B
 Program ended with exit code: 0
 */
