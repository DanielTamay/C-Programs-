#include <iostream>
#include <string>
using namespace std;

int main()
{
    int value;
    
    do
    {
        cout << "Enter a value < 100 :";
        cin >> value;
    }
    while(value >= 100);
    
    system ("pause");
    return 0;
}
