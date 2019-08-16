// File: SquareRoot.cpp

#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    float first;
    float second;
    float answer1;
    float answer2;
    float sum;
    float Totalsum;
    
    cout << "Enter 1st numeber: ";
    cin >> first;
    answer1 = sqrt(first);
    cout << " The square root of : " << first << " is : " << answer1 << endl;
    
    cout << "Enter 2st numeber: ";
    cin >> second;
    answer1 = sqrt(second);
    cout << " The square root of : " << second << " is : " << answer2 << endl;
    
    sum = (answer1 + answer2);    
    cout << "The sum of the 2 answers is: " << sum;
    
    Totalsum = sqrt (sum);
    
    system ("pause");  
    return 0;
}
