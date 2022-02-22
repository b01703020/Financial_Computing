//
//  main.cpp
//  Static_data_member
//
//  Created by wu yen sun on 2022/2/22.
//

#include <iostream>
using namespace std;

class Rectangle
{
    private:
    
        int length, width; // non static data members
        static int count; // static data member
    
    public:
    
        // default constructor
        Rectangle() :length(0), width(0)
        {
            count++;
            cout << "Length = " << length << " Width = " << width << " Count = " << count << endl;
        }
    
        // constructor with parameters
        Rectangle(int length_, int width_) :length(length_), width(width_)
        {
            count++;
            cout << "Length = " << length << " Width = " << width << " Count = " << count << endl;
        }
    
        //copy constructor
        Rectangle(const Rectangle& R) :length(R.length), width(R.width)
        {
            count++;
            cout << "Length = " << length << " Width = " << width << " Count = " << count << endl;
        }
    
        // destructor
        ~Rectangle()
        {
            count--;
            cout << "Length = " << length << " Width = " << width << " Count = " << count << endl;
        }
    
        static int GetCount() { return count; } // count is private
            
};


void RectangleQuestion(void)
{
    Rectangle R1, R2(10, 2), R3 = R2;
    // R1 is created default constructor,
    // R2 by constructor with parameters,
    // R3 by copy constructor
    
    cout << "The number of rectangles = " << Rectangle::GetCount() << endl;
    // 3
    // destructor will be invoked for each object;
    //last created object will be the 1st to destroy
}

int Rectangle::count = 0;
// static data member must be initialized outside constructor

int main(void)
{
    RectangleQuestion();
    // after the function is completed, all 3 objects are destroyed
    return 0;
}

