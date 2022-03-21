//
//  exttime.h
//  class_time_specification
//
//  Created by wu yen sun on 2022/3/20.
//

#include "time.h"
enum ZoneType {EST, CST, MST, PST, EDT, CDT, MDT, PDT } ;

class ExtTime : public Time
{
    private:
        ZoneType zone ;
    public:
        void Set (int h, int m, int s, ZoneType timeZone) ;
        void Print( ) const; //overridden
        ExtTime(int h, int m, int s, ZoneType initZone);
        ExtTime(){zone = EST;}
};


ExtTime::ExtTime(int h, int m, int s, ZoneType initZone): Time(h,m,s),zone(initZone){}

void ExtTime::Set(int h , int m , int s, ZoneType timeZone)
{
    Time :: Set (h, m, s); // same name function call
    zone = timeZone;
}

void ExtTime :: Print() const
{
    string zoneString[8] = {"EST", "CST", "MST", "PST", "EDT", "CDT", "MDT", "PDT"} ;
    Time :: Print();
    cout << " " << zoneString[zone] << endl << endl;
}
