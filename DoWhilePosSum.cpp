#include <iostream>
#include <string>
using namespace std;

int main()
{
    int sum = 0;
    int PreInt;
    int x = 0;
    
    
    
    
    do 
    {
        PreInt = x;
        cout << "Enter positive numbers only: ";
        cin >> x;
        if (x > 0)
        sum += x;
        
    }
    while (PreInt != x);
    cout << "The Total is : " << sum << endl;
    system ("pause");
    return 0;
}
