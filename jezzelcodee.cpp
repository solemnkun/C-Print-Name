C++ Print Name/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
char fname[30], mname[30], lname[30], age[30];

    cout << "Enter your First Name: ";
    cin >> fname;
    
    cout << "Enter your Middle Name: ";
    cin >> mname;
    
    cout << "Enter your Last Name: ";
    cin >> lname;
    
    cout << "Enter your Age: ";
    cin >> age;
    
    cout << "My Name is "<<fname<<" "<<mname<<" "<<lname<<" " "and I'm "<<age<<" "<< "Years Old";
    cin >> fname;
    
    return 0;
}
