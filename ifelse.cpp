#include <iostream>
using namespace std;

int main ()
{
    int age;
    
    cout << "Enter Age: ";
    cin >> age;
    if (age > 64)
       cout << "Senior voter";
       
    else if (age < 18)
       cout << "Under Age ";
    else
    cout << "Regular voter:";
    
    system ("pause");
    return 0;
}
