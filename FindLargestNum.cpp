#include <iostream>
#include <string>
#include <limits>  //Needed for INT_MIN
using namespace std;

int main()
{
    int itemValue;          //input - each data value
    int largestSoFar;       //output - largest value so far
    int minValue;           // the smallest integer
    
    // Initialize largestSoFar to the smallest integer.
    minValue = INT_MIN;
    largestSoFar = minValue;
    
    // Save the largest number encounter so far.
    cout << "Finding the largest value in a sequence: " << endl;
    
    do 
    {
         cout << "Enter an integer or " << minValue << "to stop: ";
         cin >> itemValue;
         if (itemValue > largestSoFar)
            largestSoFar = itemValue;   //save new larget number
    }
    while (itemValue != minValue);
    cout << "The largest value entered was " << largestSoFar << endl;
    
    system ("pause");
    return 0;
}
