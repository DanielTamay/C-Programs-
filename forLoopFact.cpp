  
//Factorial Problem
#include <iostream>
#include <string>
using namespace std;
int main
{
  int n;
   
        int product; // accumulator for product computation
        product = 1;
        // Computes the product n x (n-1) x (n-2) x ... x2
      
        for (int i = n; i > 1; i--)  // i-- is the same as i= i-1
    
        product = product * i;
        //Returns function result
        return product;
   
}
