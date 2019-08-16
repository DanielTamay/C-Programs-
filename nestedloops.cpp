//nestedloops.cpp

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Display heading 
    cout << setw(12) << "i" << setw(6) << "j" << endl;
    for (int i=0; i < 4; i++)
    {
        cout << "Outer" << setw(7) << i << endl;
        for (int j = 0; j < i; j++)
            cout << " Inner " << setw(10) << j << endl;
    } //end out loop
    
    system ("pause");
    return 0;
}
