/*
* Westchester Comumity College
*Computer Programing I
*Author: Daniel Tamay
*Program: Converting Miles to Kilometers
*Date: 9/14/2015
*/


#include <iostream> //Class for stream input/output

using namespace std;//use standard namespace

int main()//start of main function 
{
    const float km_per_mile = 1.609; //1.609 km in a mile
    float miles,//input: distance in miles
    kms;//output: distance in kilometers
    // get distance in miles.
    cout << "Enter distance in miles:";
    cin>> miles;
    //Convert the distance to kilometers.
    kms = km_per_mile * miles;
    //Display the distance in kilometers.
    cout << "The distance in kilometers is" << kms << endl;//endl (means end of line)
    system("PAUSE");
    return 0;
}
