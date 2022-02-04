//
//  main.cpp
//  Pointers_basic
//
//  Created by wu yen sun on 2022/2/4.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    // A pointer is a variable used to store an address in computer memory.
    // Use the address operator (reference operator) & to get the address of a variable
    double dPrice = 21.68;
    cout << &dPrice << endl << endl; // prints address in hexadecimal 0x16fdff258
    
    
    // Pointer variable (pointer): variable that holds the address of a variable.
    double *dPtr = &dPrice;
    cout << dPtr << endl; // 0x16fdff258
    cout << *dPtr << endl << endl; // 21.68
    
    
    // The Relationship Between Arrays and Pointers
    int iArray[] = {2, 4, 6};
    cout << iArray << endl; // 0x16fdff258
    cout << iArray[0] << endl; // 2
    // Array name can be used as a pointer constant
    cout << *iArray << endl; // 2
    // Pointer can be used as an array name
    int *arrayPtr = iArray;
    cout << arrayPtr[1] << endl << endl; // 4
    
    
    // Pointers in Expressions
    cout << *(arrayPtr+1) << endl; // 4
    cout << *(arrayPtr+2) << endl; // 6
    cout << *(arrayPtr)+1 << endl << endl; // 3
    
    
    // Pointer Arithmetic
    cout << *(++arrayPtr) << endl; // 4
    cout << *(--arrayPtr) << endl; // 2
    cout << *(arrayPtr + 2) << endl; // 6
    
    arrayPtr += 2;
    cout << arrayPtr - iArray << endl << endl;
    // 2: the number of ints between arrayPtr and iArray
    
    
    // Pointer Initialization
    int *iPtr = NULL;
    int iNum = 25, *numPtr = &iNum;
    //int *iPtr = &dPrice; // wrong due to mismatch data types
    
    return 0;
}
