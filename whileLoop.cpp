#include <iostream>
#include <string>
using namespace std;


int main ()

{   int n;
    int countStar;
    
    cout << "Enter number of stars ";
    cin >> n;
    countStar = 0;
    while (countStar < n)
    {
          cout << "*" << endl;
          countStar = countStar + 1;
    }
    
    system ("pause");
    return 0;
}
