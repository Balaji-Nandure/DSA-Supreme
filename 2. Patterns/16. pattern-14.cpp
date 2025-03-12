#include<iostream>
using namespace std;

int main (){
    int n = 10;

    // Hollow diamond

    // Outer loop for rows(i.e upper part of hollow diamond)
    for (int i=0; i<n; i++){

        // Print sapces
        for(int j=0; j<n-i-1; j++){
            cout << "  ";
        }

        // Stars
        for(int j=0; j<2*i+1; j++){

            // If first or last character in the row then print star else print space
            if (j==0 || j==2*i){
                cout << "* ";
            } else {
                cout << "  ";
            }

        }

        cout << endl;
    }

    // 2nd part of howllow diamong
    for (int i=0; i<n; i++){

        // Print sapces
        for(int j=0; j< i; j++){
            cout << "  ";
        }

        // Stars
        for(int j=0; j< 2*n-2*i-1; j++){

            if (j==0 || j==2*n-2*i-2){
                cout << "* ";
            } else {
                cout << "  ";
            }

        }

        cout << endl;
    }


}