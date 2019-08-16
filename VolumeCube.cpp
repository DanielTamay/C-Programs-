#include <iostream>
#include <cmath>

using namespace std;

int FindVolume(int); // Function that finds volume (prototype)

int main ()
{
    int Side;
    int Volume;
    
    cout << "What is the lenght of 1 side: ";
    cin >> Side;
    
    Volume = FindVolume(Side);
    
    cout << "The volume of your cube is " << Volume << endl;
    
    system ("pause");
    return 0;
}

  int FindVolume(int S)
  
{
      return (S * S * S);
      }
