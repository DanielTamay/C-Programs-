#include <iostream>
using namespace std;

int main ()
{
    int sum;
    char grade;
    
    cout << "Enter grade " << endl;
    cin >> grade;
    
    switch (grade)
    {
    
    case 'A': sum = sum + 4;
              break;
