//
//  main.cpp
//  class_time_specification
//
//  Created by wu yen sun on 2022/3/20.
//

#include <iostream>
#include "exttime.h"



int main(int argc, const char * argv[]) {
    ExtTime et1;
    et1.Print();
    
    ExtTime *et2 = new ExtTime(8,30,0,EST);
    et2 -> Print();
    
    ExtTime thisTime ( 8, 35, 0, PST ) ;
    ExtTime thatTime ; // default constructor called
    thatTime.Print( ) ; // outputs 00:00:00 EST
    thatTime.Set (16, 49, 23, CDT) ;
    thatTime.Print( ) ; // outputs 16:49:23 CDT
    
    delete et2;
    et2 = NULL;

    return 0;
}

/*
 0:0:0 EST

 8:30:0 EST

 0:0:0 EST

 16:49:23 CDT

 Program ended with exit code: 0
 */
