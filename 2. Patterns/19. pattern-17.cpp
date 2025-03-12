#include<iostream>
using namespace std;

int main (){
    // Numeric full pyramid pattern
    //      1
    //     232
    //    34543
    //   4567654
    //  567898765
    int n = 5;

    for (int i=0; i<n; i++){
        // for spaces
        for (int j=0; j<n-i-1; j++){
            cout << " ";
        }

        
        for (int j=0; j<=i; j++){
            cout << i + j + 1;
        }

        int start = 2*i;
        for (int j=0; j<i; j++){
            cout << start;
            start--;
        }
        cout << endl;
    }
}