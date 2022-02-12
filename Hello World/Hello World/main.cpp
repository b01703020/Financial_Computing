//
//  main.cpp
//  Hello World
//
//  Created by wu yen sun on 2022/2/11.
//

#include <iostream>
using namespace std;
int main()
{
    //display message
    cout << "Hello World!" << endl;
    
    //take input from keyboard
    double price = 0.0; cin >> price;
    cout << "price = " << price << endl;
    
    char x = '\0'; //null character
    cin >> x;
    cout << "x = " << x <<endl;
    return 0;
}

/*

Hello World!
23.45
price = 23.45
A
x = A
Program ended with exit code: 0

*/
