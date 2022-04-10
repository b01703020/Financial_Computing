//
//  main.cpp
//  Object_initialization
//
//  Created by wu yen sun on 2022/2/16.
//

#include <iostream>
using namespace std;

class Rectangle
{
    private:
        int width;
        int length;
    public:
        Rectangle(); // default constructor
        Rectangle(int w, int l); // constructor with parameters
        Rectangle(const Rectangle &r); //copy constructor; reference to constant
        void set(int w, int l);
        int area();
};

Rectangle::Rectangle(): width(0),length(0){}
Rectangle::Rectangle(const Rectangle &r):width(r.width),length(r.length){}
int Rectangle::area(){return width*length;}
void Rectangle::set(int w, int l)
{
    width = w;
    length = l;
}

int main()
{
    //Initialize with default constructor
    Rectangle r1;
    cout << r1.area() <<endl;
    r1.set(60, 80);
    cout << r1.area() <<endl;
    Rectangle *r3 = new Rectangle;
    cout << r3->area() <<endl;
    
    
    //Initialize with copy constructor
    Rectangle r5 = r1;
    cout << r5.area() <<endl;
    Rectangle r6(*r3);
    cout << r6.area() <<endl;
    Rectangle *r7 = new Rectangle(r1);
    cout << r7->area() <<endl;
    
    //assignment
    *r7 = *r3;
    cout << r7->area() <<endl;
    
    delete r3;
    delete r7;
    r3 = nullptr;
    r7 = nullptr;
    
    return 0;
}
