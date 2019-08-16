#include <iostream>
using namespace std;
int main()
{
    int x,y,temp;
      
    cout << "Enter 1st integer";
    cin >> x;
    cout << "Enter 2nd integer";
    cin >> y;
    
    cout << " x = " << x << " y = " << y;
    if (x > y)
    {
          temp = x;             //store x in temp
          x = y;                //store original y in x
          y = temp;             //store original x in y
    }

system ("pause");    
return 0;
    
}
