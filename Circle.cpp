#include <iostream>
using namespace std;
int main ()
{
    const float PI = 3.14;
    float area, radius, circumference;
    
    cout<< "Please input radius: ";
    cin>> radius;
    area = radius * radius * PI;
    circumference = 2 * PI * radius;
    cout << "The area of the circle is: " << area << endl;
    cout << "The circumference of the circle is: " << circumference << endl;
    return 0;
    
}
    
    
    
