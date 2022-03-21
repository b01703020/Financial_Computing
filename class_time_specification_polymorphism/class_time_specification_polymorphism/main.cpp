//
//  main.cpp
//  class_time_specification_polymorphism
//
//  Created by wu yen sun on 2022/3/20.
//

#include <iostream>
#include "exttime.h"
using namespace std;

void Print_static (Time someTime ) //pass an object by value
{
    cout << "Time is " ;
    someTime.Print () ;
    cout << endl ;
}

void Print_dynamic (Time * someTime )
{
    cout << "Time is " ;
    someTime->Print( ) ;
    cout << endl ;
}

int main(int argc, const char * argv[])
{
    
    Time startTime ( 8, 30, 0 ) ;
    ExtTime endTime (10, 45, 0, CST) ;
    
    cout << "static binding result: "<<endl;
    Print_static ( startTime ) ;
    Print_static ( endTime ) ;
    cout << endl;
    
    cout << "dynamic binding result: "<<endl;
    Time *timeptr = &startTime;
    Print_dynamic(timeptr) ;
    timeptr = &endTime;
    Print_dynamic (timeptr) ;
    
    return 0;
}


/*
 static binding result:
 Time is 8:30:0
 Time is 10:45:0

 dynamic binding result:
 Time is 8:30:0
 Time is 10:45:0 CST

 Program ended with exit code: 0
 */
