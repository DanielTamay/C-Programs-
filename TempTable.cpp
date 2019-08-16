//Temperature.cpp

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int CBEGIN = 10;
    const int CLIMIT = -5;
    const int CSTEP =  5;
    float fahrenheit;
    
    //print the table heading.
    cout << "CELSIUS   " <<"   FAHRENHEIT" << endl;
    //print table.
    for ( int celsius = CBEGIN; celsius >= CLIMIT; celsius -= CSTEP)
    {
        fahrenheit = 1.8 * celsius + 32.0;
        cout << setw(5) << celsius << setw(15) << fahrenheit << endl;
    }
    system ("pause");
    return 0;
}
