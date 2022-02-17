//
//  main.cpp
//  Class_bisic
//
//  Created by wu yen sun on 2022/2/16.
//

#include <iostream>
using namespace std;

class Rectangle
{
    private:
    
        int width, length;
    
    public:
    
        Rectangle()
        {
            width = 0;
            length = 0;
        }
    
        Rectangle(int w, int l)
        {
            width = w;
            length = l;
        }
        
        void set (int w, int l);
    
        int area() //inline
        {
        return width*length;
        }
};

void Rectangle::set(int w, int l)
{
    width = w;
    length = l;
}

int main()
{
    Rectangle rect(3, 5);
    cout << rect.area()<<endl;
    
    Rectangle r1(4,6);
    r1.set(5,8);
    cout << r1.area()<<endl;
    
    Rectangle *rp = &r1;
    rp->set(8,10);
    cout << r1.area()<<endl;
    
    return 0;
}
