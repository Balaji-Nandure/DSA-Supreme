#include<iostream>
using namespace std;

int main (){
    // Inverted pyramid
    int n = 5;

    for (int i=0; i<n; i++){
        // for (int j=0; j<(2*n - 1); j++){
        //     cout << ". ";
        // }

        // First print the spaces
        for (int j=0; j<i; j++){
            cout << "  ";
        }
        
        // There is small problem in this for loop. i.e spaces after * is one only.
        // for ( int j=0; j<n-i ; j++){
        //     cout << "* ";
        // }


        // now lets print stars
        for ( int j=0; j<n-i ; j++){
            cout << "*   ";
        }
        
        cout << endl;
    }

}