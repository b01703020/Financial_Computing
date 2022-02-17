//
//  main.cpp
//  Declaration_of_an_object
//
//  Created by wu yen sun on 2022/2/16.
//
#include <iostream>
using namespace std;
class Rectangle
{
    private:
        int width; int length;
    
    public:
        Rectangle(){ width = 0; length = 0; };
        void set(int w, int l);
        int area() const { return width * length; }
};

void Rectangle :: set (int w, int l)
{
    width = w;
    length = l;
}

int main()
{
    Rectangle r1;
    Rectangle r2;
        
    r1.set(5, 8);
    cout<<r1.area()<<endl;
        
    r2.set(8,10);
    cout<<r2.area()<<endl;

    Rectangle *ptr1 = nullptr; //ptr is a pointer to a Rectangle object
    ptr1 = &r1;
    ptr1->set(10,10); //arrow notation
    cout<<r1.area()<<endl;
    
    Rectangle *ptr2 = nullptr;
    ptr2 = new Rectangle();
    ptr2->set(80,100); //arrow notation
    cout<<ptr2->area()<<endl;
    
    delete ptr2;
    ptr2 = nullptr;
    
    return 0;
}
