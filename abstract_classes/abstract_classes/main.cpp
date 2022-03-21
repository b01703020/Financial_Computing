//
//  main.cpp
//  abstract_classes
//
//  Created by wu yen sun on 2022/3/20.
//

#include <iostream>
using namespace std;


class Shape    //Abstract
{
    public :
    //Pure virtual Function
    virtual void draw() = 0;
};

// OK, not defined inline
void Shape::draw()
{
 cout << "Shape" << endl;
}


class Circle : public Shape
{
    //No draw() - Abstract
    public :
    void print(){ cout <<" I am a circle" << endl;}
};


class Rectangle : public Shape
{
    // Override Shape::draw()
    public :
    void draw()
    {
        Shape::draw(); //Reuse
        cout <<"Rectangle"<< endl;
    }
};



int main(int argc, const char * argv[])
{
    // Shape s; // error : variable of an abstract class
    Rectangle r; // Valid: Rectangle is a concrete class
    // Circle c; // error: Circle is an abstract class
    return 0;
}

