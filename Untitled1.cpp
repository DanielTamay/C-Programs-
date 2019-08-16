int main()
{
    string name;
    int pennies;
    int nickels;
    int dollars;
    int change;
    int TotalCents;
    //Prompt for user name.
    cout << "Enter your first name: ";
    cin >> name;
    //Read in the count of nickels and pennies.
    cout << "Enter the number of nickels: ";
    cin >> nickels;
    cout << "Enter number of pennies: ";
    cin >> pennies;
    TotalCents = 5 * nickels + pennies
    dollars = TotalCents/100;
    change = TotalCents % 100;
    
    cout << "Good Work " << name << "! " << endl;
    cout <<
