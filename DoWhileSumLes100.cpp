#include <iostream>
#include <string>
using namespace std;

int main()
{
    int sum;
    int n;
    n = 0;
    sum = 0;
       
    while (sum <= 100)
    {
        n++;
        sum += n;
        
    }
    cout << "You must add at least " << n 
    << " sequential integers to get a sum of 100. ";
    
    system ("pause");
    return 0;
}
