#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int countInt = 1;
    while (countInt < 6)
    {
          cout << "Integer is " << countInt << endl;
          cout << "Its square is " << countInt*countInt<< endl;
          cout << "Its cube is " << countInt*countInt*countInt<< endl;
          countInt = countInt + 1;
    }
    system ("pause");
    return 0;
}
