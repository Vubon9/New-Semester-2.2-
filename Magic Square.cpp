#include<bits/stdc++.h>
using namespace std;

int main() {

    int n, k, l;

    cout << "Enter the Odd Number: ";
    cin >> n;

    // Check odd number
    if(n % 2 == 0) {
        cout << "Please enter an odd number!" << endl;
        return 0;
    }

    // Magic square array
    int square[50][50];

    // Initialize all values with 0
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            square[i][j] = 0;
        }
    }

    // Starting position
    int i = 0;
    int j = n / 2;

    square[i][j] = 1;

    // Fill the magic square
    for(int key = 2; key <= n * n; key++) {

        // Move Up
        if(i > 0) {
            k = i - 1;
        }
        else {
            k = n - 1;
        }

        // Move Left
        if(j > 0) {
            l = j - 1;
        }
        else {
            l = n - 1;
        }

        // Check occupied cell
        if(square[k][l] >= 1) {
            i = (i + 1) % n;   // Move Down
        }
        else {
            i = k;
            j = l;
        }

        square[i][j] = key;
    }

    // Print Magic Square
    cout << "\nMagic Square:\n\n";

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << setw(4) << square[i][j];
        }
        cout << endl;
    }

    return 0;
}
