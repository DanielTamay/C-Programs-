#include <iostream>
#include <string>
using namespace std;


int main ()


{   
    int counter;
    int Sum;
    int n;
     
     cout << "Enter the limiting number ";
     cin >> n;
    
    for (counter = 2; counter <= n; counter+=2)
    {
        cout << counter <<endl;
    }
    
    cout <<"The sum of the numbers from " << n << " is " << sum << endl;
    
    system ("pause");
    return 0;
}
