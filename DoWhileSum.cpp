#include <iostream>
#include <string>
using namespace std;

int main()
{
    int sum = 0;
    int nextInt;
    
    
    
    
    do 
    {
        cout << "Enter the numbers: ";
        cin >> nextInt;
        sum += nextInt;
        cout << "The Total is : " << sum << endl;
    }
    while (nextInt != 0);
    
    system ("pause");
    return 0;
}
