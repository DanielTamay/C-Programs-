#include <iostream>
#include <string>
using namespace std;


int main ()

{   int count=0;
    int sum=0;
    int item;
    while (count<5)
    {
          cout << "Enter data item: ";
          cin >> item;
          sum +=item;
          count=count+1; //or count++;
    }
    cout << count << "Data items were added " << endl;
    cout <<"Their sum id " << sum << endl;
    system ("pause");
    return 0;
}
