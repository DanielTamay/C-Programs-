/*
* Westchester Comumity College
*Computer Programing I
*Author: Daniel Tamay
*Program: Multiplying 2 numbers 
*Date: 9/14/2015
*/


#include <iostream> //Class for stream input/output

using namespace std;//use standard namespace

int main()//start of main function
{
    int y1, y2, prod;
    cout << "Input first integer: ";
    cin >> y1;
    cout << "Input second integer: ";
    cin >> y2;
    prod = y1*y2;
    cout << "Product is = " << prod;
    system ("pause");
    return 0;
}
