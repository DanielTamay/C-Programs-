/*
* Westchester Community College
* Computer Programing I
* Program: Given 3 numbers, find the sum, average, and product.
* Author: Daniel Tamay
* Date: 9/18/2015
* Status: Completed Program.
*/

/* 
 Problem Analysis:
 Ask user to input 3 numbers sequentially (3 questions)
 Inputs: 
 numbers/integers
 Outputs:
 Read back the numbers the user chose
 Display the Sum, Average, & product
 
 Algorithm:
 1. Store numbers in objects of type int
 2. Computation:
   2.1 Take sum & and store value in Sum
   2.2 DIvide sum by 3 and save in Average
   2.3 Take product and store in Product
3. Display Sum, Average & Product
 
 Test:
 Sum that results in odd integer gives incorect average

 Fix:
 Change all objects to type float.
*/

#include <iostream>
#include <string>
using namespace std;

int main()							//Program starts here
{
	float A;						//First integer
	float B;						//Second integer
	float C;						//Third integer
	float Sum;						//Sum of integers
	float Average;					//Average of integers
	float Product;					//Product of integers
	

	//Ask for 1st integer
	cout << "Please input 1st integer: ";
	cin >> A;
	//Ask for 2nd integer
	cout << "Please input 2nd integer: ";
	cin >> B;
	//Ask for 3rd integer
	cout << "Please input 3rd integer;";
	cin >> C;
	//Display integers on the screan:
	cout << "Your integers are: " << A << ", " << B << " & " << C << endl;
	//Computations:
	Sum = (A + B + C);
	Average = Sum / 3;
	Product = (A*B*C);
	//Displaying results:
	cout << "The Sum of your intergers is: " << Sum << endl;
	cout << "The average of your integers is: " << Average << endl;
	cout << "The product of your interegers is: " << Product << endl;

	system("pause");
    return 0;
}
