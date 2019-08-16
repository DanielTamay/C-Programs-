// Oil capacity

#include <iostream>
#include <string>
using namespace std;

const float CAPACITY = 10000;// tank capacity
const float MINPCT = 10.0;//min percent

float monitorOil(float, float);

int main()
{
    float supply; //input - initial supply
    float oilLeft;//output
    float minOil;
    
    cout << "Enter initial oil supply: ";
    cin >> supply;
    minOil = CAPACITY * (MINPCT / 100.0);
    oilLeft + monitorOil (supply , minOil);
    
    cout << endl << oilLeft << " gallons left in tank." << endl;
    
    if (oilLeft < minOil)
    cout << "Warning -  amount left in the tank is lef than the minimum!) " << endl;
    system ("pause");
    return 0;
}
float monitorOil(float supply, float minOil)
{
      float usage;
      float oilLeft = supply;
      
    while (oilLeft > minOil)
    {
          cout <<"Enter amount used today: ";
          cin >> usage;   
          oilLeft -= usage;
          cout << "After removal of " << usage << " gallons, " << endl;
          cout << "number of gallons left is " << oilLeft << endl << endl;
    }
    return oilLeft;
}
