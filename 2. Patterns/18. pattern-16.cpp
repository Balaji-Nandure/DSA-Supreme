#include<iostream>
using namespace std;

int main (){
    // Alphabet palindrome pyramid
    // A
    // ABA
    // ABCBA
    // ABCDCBA
    // ABCDEDCBA
    int n = 5;
    for (int i=0;i<n;i++){
        int j;
        for (j=0; j<i+1; j++){
            char ch = j + 'A';
            cout << ch;
        }

        j=j-1;

        for ( ; j>=1; j--){
            char ch = j + 'A' - 1;
            cout << ch;
        }

        cout << endl;
    }

}