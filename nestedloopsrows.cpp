//nestedloops.cpp

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{         //Display table heading 
    cout << "  |";
    for (int colHead = 0; colHead < 10; colHead++)
        cout << setw(3) << colHead;
        cout << endl;
        cout << "--------------------" endl;
        
        //Display table, row-by-row
        for (int rowVal = 0; rawVal < 10; rowVal++)
        {
            cout << setw(3) << rowVal << '|';
            for(int colVal = 0; colVal < 10; colVal++)
            cout << set(3) << rowVal * colVal;
            cout << endl;
