 #include<bits/stdc++.h>
 using namespace std;
 double fun(double x)
 {
     return 3*x-cos(x)-1;
 }
int main()
{
    double a,b,c;
    cout<<"Enter the value of a and b;
    cin>>a>>b;
    if(fun(a)*func(b)>0){
     cout<<"Error";
     return 0;
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

Bisection Method
#include<bits/stdc++.h>
using namespace std;
double fun(double x) {
    return 3 * x - cos(x) - 1;
}
int main() {
    double a = 0, b = 1, c;
    // Table header
    cout << setw(5) << "Iter"
         << setw(12) << "a"
         << setw(12) << "b"
         << setw(12) << "f(a)"
         << setw(12) << "f(b)"
         << setw(12) << "c(a+b/2)"
         << setw(12) << "f(c)" << endl;

    cout << " " << endl;
    for (int i = 1; i <= 15; i++) {
        c = (a + b) / 2.0;

        double fa = fun(a);
        double fb = fun(b);
        double fc = fun(c);

        // Print all values correctly
        cout << setw(5) << i
             << fixed << setprecision(6)
             << setw(12) << a
             << setw(12) << b
             << setw(12) << fa
             << setw(12) << fb
             << setw(12) << c
             << setw(12) << fc << endl;

        // Stopping condition
        if (fabs(fc) < 1e-9) {
            break;
        }

        // Update interval
        if (fa * fc < 0) {
            b = c;
        } else {
            a = c;
        }
    }

    cout << "\nFINAL ROOT: " << c << endl;

    return 0;
}
