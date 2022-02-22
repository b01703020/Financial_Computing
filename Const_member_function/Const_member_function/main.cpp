//
//  main.cpp
//  Const_member_function
//
//  Created by wu yen sun on 2022/2/16.
//
#include <iostream>
using namespace std;

class Time
{
    private :
        int hrs, mins, secs;
    
    public :
        Time(); //default constructor
        Time(int h, int m, int s);
        void Set (int h , int m , int s);
        void Print() const; //const member function
};

Time::Time(int h, int m, int s) : hrs(h), mins(m), secs(s) {} //initialization list


void Time::Set(int h , int m , int s)
{
    hrs = h;
    mins = m;
    secs = s;
}

void Time :: Print() const
{
    cout << hrs << ":" << mins << ":" << secs << endl;
}

int main()
{
    Time t1(11,27,36);
    t1.Print();
    
    t1.Set(10, 10, 10);
    t1.Print();
    return 0;
}
