//
//  time.h
//  class_time_specification
//
//  Created by wu yen sun on 2022/3/20.
//

#include <iostream>
using namespace std;

class Time
{
    protected :
        int hrs ;
        int mins ;
        int secs ;
    
    public :
        Time():hrs(0),mins(0),secs(0){}
        Time(int h, int m, int s) ;
        void Set ( int h, int m, int s) ;
        void Print( ) const ;
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
    cout << hrs << ":" << mins << ":" << secs;
}
