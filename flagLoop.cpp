
#include <iostream>
#include <string>
using namespace std;

int main()
{

{       
        char nextChar;  //user input - next data character
        bool digitRead; //status flag - set true
                        //when digit character is raed
        
        digitRead = false;  // no digit character yet
        while (!digitRead)
        {     
              cout << "Enter valid digit";
              cin >> nextChar;
              digitRead = (('0' <= nextChar) && (nextChar <= '9'));
        }
        cout << "The valid digit is " << nextChar;
        
        system ("pause");
        return 0; //return first digit character
}
}
