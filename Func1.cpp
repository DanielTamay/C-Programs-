#include <iostream>
#include <string>
using namespace std;
void hello(string name); // function declaration

int main()
{
    hello("Michael");
    system ("pause");
    return 0;
}
void hello(string name)
{
    cout << "Hello, " << name;
}
     
