#include<iostream>
using namespace std;

int main (){
    // Flipped solid diamond
    int n = 5;

    // 1st part
    for( int i = 0; i < n; i++){
        // Frist print half inverted pyramid
        for (int j=0; j<n-i; j++){
            cout << "*";
        }

        // spaces
        for (int j=0; j<2*i+1; j++){
            cout << " ";
        }

        // Last stars
        for (int j=0; j<n-i; j++){
            cout << "*";
        }
        
        cout << endl;
    }

    // 2nd part
    for( int i = 0; i < n; i++){
        // Frist print half inverted pyramid
        for (int j=0; j<i+1; j++){
            cout << "*";
        }

        // spaces
        for (int j=0; j<2*n-2*i-1; j++){
            cout << " ";
        }

        // Last stars
        for (int j=0; j<i+1; j++){
            cout << "*";
        }
        
        cout << endl;
    }
}