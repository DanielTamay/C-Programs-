#include <iostream>
#include <cmath>

using namespace std;

//Function Prototype

float scale(float, int); // function to calculate scale

int main()
{
    float num1; // hold the real number to be scale
    int num2;   //holds the integer valuer to calulate scale
    
    // Get values for num1 and num2
    
    cout << "Enter a real number: ";
    cin >> num1;
    cout << "Enter an interger: ";
    cin >> num2;
    //Call scale and display result.
    cout << "Result of call to function scale is  " << scale(num1, num2) << endl;
    
    system ("pause");
    return 0;
}

//Computes the scale

float scale(float x, int n) // Formal parameter
{ float scaleFactor;
  scaleFactor = pow(10.0,n);
  return (x * scaleFactor);
}
