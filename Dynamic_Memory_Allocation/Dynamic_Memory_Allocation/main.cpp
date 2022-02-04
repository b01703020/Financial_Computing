//
//  main.cpp
//  Dynamic_Memory_Allocation
//
//  Created by wu yen sun on 2022/2/4.
//

#include <iostream>
using namespace std;


int* getNum1()          // Should not return the address of a local variable
{
    int num = 10;       // num i s a local variable
    num += 1;
    return &num;        // its address is not reliable once the function is complete
}


int getNum2()           // no issue
{
    int num = 10;
    num += 1;
    return num;         // the value of num is copied and the copy is returned to main function
}


void getNum3(int* ptr)  // call by pointer, no issue
{                       // address of y is passed to pointer ptr
    *ptr += 1;
}


int* getNum4()
{
    int* ptr = new int; // dynamic allocation
    *ptr = 10;          // deference and assign to 10
    *ptr += 1;          // deference and add 1
    //delete ptr;       // can not free memory inside the function as the pointer will be used in main as ptr2
    //ptr = NULL;
    return ptr;         // return the pointer
}



int main()
{
    // int* ptr1 = getNum1();
    // *ptr1 += 1;
    // cout << "*ptr1=" << *ptr1 << endl;
    // Function must not return a pointer to a local variable in the function
    
    int x = getNum2();
    x += 1;
    cout << "x=" << x << endl; // 12
    
    int y = 10;
    getNum3(&y);
    y += 1;
    cout << "y=" << y << endl; // 12
    
    int* ptr2 = nullptr;
    ptr2 = getNum4();          // ptr2 is pointing to the allocated memory
    *ptr2 += 1;
    cout << "*ptr2=" << *ptr2 << endl;
    // 12 after comment out free memory and preventing dangling
    
    // free memory before preventing dangling
    delete ptr2; // free alocated memory
    ptr2 = NULL; // prevent dangling
    
    return 0;
}
