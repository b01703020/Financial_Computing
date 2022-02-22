//
//  main.cpp
//  Object_initialization_dynamic_allocation
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
        unsigned int id;
    public:
    Account();
    Account(const Account &a);
    Account(char *const person);
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

int main()
{
    string sperson = "John"; //string const
    char* const p1 = (char* const)sperson.c_str();
    
    Account a1(p1);
    Account a2(a1);
    Account *a3 = new Account(a2);
    
    // a1, a2 will be destoryed by destructor
    // a3 is on heap
    
    delete a3; //destory a3* and free the memory
    a3 = NULL;
    
    return 0;
}
