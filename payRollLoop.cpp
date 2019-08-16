#include <iostream>
using namespace std;
int main ()
{
float hours;
float rate;
float pay;
int countEmp;

float TotalPay = 0;
countEmp = 0;       //number of employees processed yet
while (countEmp < 3)//test the count of employees

{
      cout << "Hours: ";
      cin >> hours;
      cout << "Rate: $ ";
      cin >> rate;
      pay = hours * rate;
      cout << "Weekly pay is " << pay << endl;
      TotalPay = TotalPay + pay;
      countEmp = countEmp+ 1; // increment count of employees
}
      cout << "All employees processed " << endl;
      cout << "Total Payroll Expence is: " << TotalPay << endl;
system ("pause");
return 0; 
}
