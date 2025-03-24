#include<iostream>
using namespace std;


int main (){
    // Solid half diamond
    // * 
    // * *
    // * * *
    // * * * *
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *
    int n=5; 
    int num=0;

    for(int i=0; i<(2*n)-1; i++){
        if (i<n){
            // cout << "yes";
            for (int j=0; j<=i; j++){
                cout << "* ";
            }
        } else {
            // cout << "no";
            for (int j=0; j<n-num-1; j++){
                cout << "* ";
            }
            num++;
        }

        cout << endl;
    }
}