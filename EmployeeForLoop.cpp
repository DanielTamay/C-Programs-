//Process payroll for all employees.

totalPay = 0.0;
for ( countEmp = 0;             //initialization
      countEmp < numberEmp;    //test
      countEmp += 1)           //update
      
{
      cout << "Hours : ";
      cin >> hours;
      cout << "Rate : $ ";
      cin >> rate;
      pay = hours * rate; 
