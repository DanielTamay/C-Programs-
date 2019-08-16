#include <iostream>
#include <string>
using namespace std;

int main()
{
    int nextInt; //Next number read
    int max = 100;
    int min = 0;
    // Enter data untila a number bettween min and max is read.
    cout << "Enter an integer between 0 and 100 ";
    cin >> nextInt;
    
    
    do
    {
             cout << "Enter a number between " << min
                  << " and " << max << ": ";
             cin >> nextInt;
    }
    while ((nextInt < min) || (nextInt > max));
    
    system ("pause");
    
    return 0;
    
}
