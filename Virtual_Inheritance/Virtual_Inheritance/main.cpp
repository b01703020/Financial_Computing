//
//  main.cpp
//  Virtual_Inheritance
//
//  Created by wu yen sun on 2022/4/8.
//

#include <iostream>
using namespace std;

class Person {
    public:
        int GetAge() const;
        int GetId() const;
        void SetAge( int age_ );
        void SetId( int id_ );
    private:
        int age;
        int id;
};

class Student : public virtual Person
{
    public:
        double GetGPA() const;
        void SetGPA( double gpa_ );
    private:
        double gpa;
};

class Employee :public virtual Person
{
    public:
        double GetSalary() const;
        void SetSalary( double salary_ );
    private:
        double salary;
};

class GradAssistant :public Student, public Employee
{
    public:
    void Display() const;
};

void GradAssistant::Display() const
{
    cout << GetId() << "," << GetAge() << "," << GetGPA() << "," << GetSalary() << endl; // no ambiguous
}

int main(int argc, const char * argv[])
{
    
    GradAssistant GA;
    GA.Display();
    return 0;
}

