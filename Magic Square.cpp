#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,l;
    cout<<"Enter the Odd Number: ";
    cin>>n;

    if(n%2==0){
        return 0;
    }
    else{
        int square[50][50];   // fixed size (safe)

        // initialize 0
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                square[i][j]=0;
            }
        }

        int i = 0;        // starting position
        int j = n/2;
        square[i][j] = 1; // first value

        for(int key=2; key<=n*n; key++){

            // move up
            if(i>0){
                k=i-1;
            }
            else{
                k=n-1;
            }

            // move right
            if(j<n-1){
                l=j+1;
            }
            else{
                l=0;
            }

            if(square[k][l]>=1){
                i=(i+1)%n;   // move down
            }
            else{
                i=k;
                j=l;
            }

            square[i][j]=key;
        }

        // print
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<square[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}