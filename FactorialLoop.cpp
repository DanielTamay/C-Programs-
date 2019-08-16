//Factorial Problem
#include <iostream>
#include <string>
using namespace std;


int factorial(int n);

int main ()
{
    int n;
    cout << "Enter number you want factorial of ";
    cin >> n;
    cout << "the result is : " << factorial(n) << endl;
  
    system ("pause");
    return 0;
    
}
  int factorial(int n)
  {
        int product; // accumulator for product computation
        product = 1;
        
        // Computes the product n x (n-1) x (n-2) x ... x2
      
        for (int i = n; i > 1; i--)  // i-- is the same as i= i-1
    
        product = product * i;
        //Returns function result
        return product;
   }
