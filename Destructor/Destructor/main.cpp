//
//  main.cpp
//  Destructor
//
//  Created by wu yen sun on 2022/2/22.
//

#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class Account
{
    private:
        char *name;
        double balance;
        unsigned int id; //unique
    public:
        Account();
        Account(const Account &a);
        Account(char * const person);
        ~Account(); //First-In-Last-Out (stack)
};

Account :: Account() : name(NULL), balance(0.0), id(0) {}

Account :: Account(const Account &a) : balance(a.balance), id(a.id)
{
    name = new char[strlen(a.name)+1];
    strcpy (name, a.name);
}

Account :: Account(char *const person) : balance(0.0), id(0)
{
    name = new char[strlen(person)+1];
    strcpy (name, person);
}

Account :: ~Account()
{
    if ( name != NULL)
        delete[] name;
}

int main()
{
    return 0;
}


