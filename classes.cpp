#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstName, lastName; // inputs- 1st and last name
    string wholeName;           // output - whole name
    string greeting = "Hello "; // outpu - a greeting  string
    
    //Read first and last name.
    cout << "Enter your first name ";
    cin >> firstName;
    cout << "Enter your last name "; 
    cin >> lastName;
    // displays full name
    wholeName = firstName + " " + lastName;
    cout << greeting << wholeName << '!' << endl;
    cout << "You have "<< (wholeName.length()- 1)
         << " letters in your name " << endl;
    //display initials
    cout << "Your initials are " << firstName.at(0)<< lastName.at(0) << endl;
    wholeName.insert(0, "Mr. ");
    
    cout << wholeName << endl;
    
    wholeName.replace(2, 2,"S."); //Change to "Daniel S.Tamay
    cout << wholeName.erase(2  2);
    
    cout << wholeName << endl;
    string title;
    title.assign(wholeName, 0, 3); //Store "Mr. " in title
    cout << title << endl;
    
    system ("pause");
    return 0;
}
