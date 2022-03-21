//
//  time.h
//  class_time_specification_polymorphism
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
        
        virtual void Print( ) const ;
        virtual ~Time();
};

Time::Time(int h, int m, int s) : hrs(h), mins(m), secs(s) {}

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

Time::~Time(){}

