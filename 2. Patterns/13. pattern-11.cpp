#include<iostream>
using namespace std;

int main (){
    // Full pyramid pattern
    int n = 20;

    for (int i=0; i<n; i++){
        // for (int j=0; j<(2*n - 1); j++){
        //     cout << ". ";
        // }

        // First print the spaces
        for ( int j=0; i+j < n; j++){
            cout << "  ";
        }

        // now lets print stars
        for ( int j=0; j< (2*(i+1))-1 ; j++){
            cout << "* ";
        }
        
        cout << endl;
    }

}