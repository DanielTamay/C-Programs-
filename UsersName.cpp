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
    //Local Data...
    char letter1, letter2; //input and output: first 2 initials
    string lastName; //input and output: last name
    //Enter letters and print message.
    cout <<"Enter 2 initials and last name:";
    cin >> letter1 >> letter2 >> lastName;
    cout << "Hello " << letter1 << ". " << letter2 << ". " << lastName << "! ";
    cout << "We hope you are enjoying C++" << endl;
    system ("pause"); 
    return 0;
}
    
