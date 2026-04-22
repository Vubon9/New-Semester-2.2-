/* #include<bits/stdc++.h>
 using namespace std;
 double fun(double x)
 {
     return 3*x-cos(x)-1;
 }
int main()
{
    double a=0, b= 1,c;
    for(int i=1;i<= 15;i++){
        c=(a+b)/2;
        if(fun(c)==0){
            break;
        }
        else if (fun( a)*fun(c)<=0){
            b=c;
        }
        else{
            a=c;
        }
    }
    cout<<"ROOT:"<<c;
    return 0;


}
*/
#include <iostream>
#include <cmath>
#include <iomanip> // For setting decimal precision

using namespace std;

double fun(double x) {
    return 3 * x - cos(x) - 1;
}

int main() {
    double a = 0, b = 1, c;

    // Header for the table
    cout << setw(5) << "Iter" << setw(12) << "a" << setw(12) << "b"
         << setw(12) << "c (mid)" << setw(12) << "f(c)" << endl;
    cout << "------------------------------------------------------------" << endl;

    for (int i = 1; i <= 15; i++) {
        // 1. Correct Midpoint Calculation
        c = (a + b) / 2.0;

        double fc = fun(c);

        // Display current iteration values
        cout << setw(5) << i
             << fixed << setprecision(6)
             << setw(12) << a
             << setw(12) << b
             << setw(12) << c
             << setw(12) << fc << endl;

        // 2. Exact root check
        if (abs(fc) < 1e-9) {
            break;
        }

        // 3. Update boundaries correctly
        if (fun(a) * fc < 0) {
            b = c; // Root is in left half [a, c]
        } else {
            a = c; // Root is in right half [c, b]
        }
    }

    cout << " " << endl;
    cout << "FINAL ROOT: " << c << endl;

    return 0;
}
