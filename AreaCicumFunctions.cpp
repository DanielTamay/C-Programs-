#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.14159;
float findCircum(float); //function that calculates circumference 
float findArea(float);   //function that calculates area

int main()
{
    float radius = 10.0;
    float circum;
    float area;
    
    circum = findCircum(radius);    //function call to calculate circumference
    area = findArea(radius);        //function call to calculate area
    
    cout << "Area is " << area << endl;
    cout << "Circumference is " << circum << endl;
    system ("pause");
    return 0;
}
// Computes the circumference of a cicle with a radius r
// Pre: r is defined and is > 0. PI is a constant.
// Post: returns circumferencce

float findCircum(float r)
{
      return (2.0 * PI * r);
      }
      
    
// Computes the Area of a cicle with a radius r
// Pre: r is defined and is > 0. PI is a constant.
// Post: returns Area

float findArea(float r)
{
      return (PI * pow(r,2));
      }
      
