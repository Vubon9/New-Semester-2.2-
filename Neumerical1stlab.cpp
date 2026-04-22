#include<bits/stdc++.h>   
using namespace std;    

void funRec(int a){      // Recursive function 
    if(a==0)             // Base case: stop when a becomes 0
        return;
    funRec(a/2);         // Recursive call: divide number by 2
    cout<<a % 2<< " "; // Print remainder (0 or 1)
}

int main()
{
    int a;                         

    cout << "Enter number: ";       // Ask user for input
    cin >> a;                       // Take input from user

    if(a==0)                      // Special case: if input is 0
        cout<< "0";                // Print 0 directly
    else
        funRec(a);                  // Call recursive function
    return 0;                       // End of program
}