#include <iostream>
using namespace std;

int main ()
{
    char color;
    
    cout << "Enter color initial " << endl;
    cin >> color;
    
    switch (color)
    {
    
    case 'R': 
    case 'r':
         cout << "red " << endl;
         break;
         
    case 'B':
    case 'b':
         cout << "blue " << endl;
         break;
   
    case 'Y': 
    case 'y':
         cout << "yellow " << endl;
         break;
    default:
         cout << "Color not determined ";
    }
         
   system ("pause");
   return 0;
   
}
