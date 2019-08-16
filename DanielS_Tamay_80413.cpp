/*
* Westchester Community College
* Computer Programing I
* Program: Compute area of either a square or triangle (users choice).
* Author: Daniel Tamay
* Date: 10/12/2015
* Status: Completed Program.
*/

/*
Problem Analysis:
Ask user to input "s" for square and "t" for triangle then 
calculate the area based on the users choice.
Inputs:
letters and numbers
Outputs:
Read back the numbers the users choice and ask for dimentions 
Display the area of the figure
*/
/*
Algorithm:
1. Data collection
1.1. Store numbers in objects of type float and letters in characters 
1.2. Create 1 function to compute area of square.
1.3. Create 2nd function to compute area of triangle.
2. Computation:
2.1 Use respective function to compute area
2.2 Display area
*/
/*
Test: what is user inputs a capital letter.
Adjustments: included capital S and T and display message is wrong letter is picked
*/


#include <iostream>
#include <string>
#include <cmath>
using namespace std;
char LetterX;//to store the letter the user will input
float Base;//to store base of triangle or side of square
float Hight;//to store hight of triangle
float Side;//to store side of square
float Triangle(float, float); //Function to find area of triangle.
float Square(float);   //Function to find area of square.



int main()
{
	cout << "Enter s for square and t for triangle ";// ask to choose triangle or square
	cin >> LetterX;// store the letter the user picked
	
	if ((LetterX == 's') || (LetterX =='S'))// compare user's input to "s" or "S"
	{
		cout << "Enter side of square: ";//Asks for side of square
		cin >> Side;//stores lenght of 1 side of square 
		cout << "The area of your square is " << Square(Side) << endl;// calls fucntion and displays area of square 
    }
	else if ((LetterX =='t') || (LetterX == 'T'))//goes here if "t" or "T" is typed in 
	{
		cout << "Enter the base of triangle: ";// asks for the base of the triangle
		cin >> Base;//stores lenght of base 
		cout << "Enter hight of triangle:  ";//asks for hight of triangle
		cin >> Hight;//stores the hight of traingle
		cout << "The area of your triangle is: " << Triangle(Base, Hight) << endl;//calls function and displays area of triangle
	}
	else
	 {
		cout << "-------------------------------" << endl; //in case user does not input s or t
		cout <<	"*** Invalid input! GOOD BYE.***" << endl; //in case user does not input s or t
		cout <<	"-------------------------------" << endl; //in case user does not input s or t
	 }
	
	
	system ("pause");
    return 0;
}

float Square(float Side)//function to compute area of square
{ 	
	float SquareArea;
    SquareArea = (Side * Side);
	return SquareArea;
}

float Triangle(float B, float H)//function to compute area of triangle
{	
	float TriangleArea;
	TriangleArea = ((0.5) * (B * H));
	return TriangleArea;
}
