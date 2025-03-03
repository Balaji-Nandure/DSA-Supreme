#include<iostream>
using namespace std;

int main (){
    // Half pyramid
    // *
    // * *
    // * * *

    int height = 10;

    for (int row = 0; row < height; row++){
        // for (int col = 0; col< height; col++){
        //     if (col <= row){
        //         cout << "* ";
        //     }else {
        //         cout << "  ";
        //     }
        // }

        // Understand the difference between both the inner for loops.
        // there is very nice trick in this (2nd ) inner for loop.
        for (int col = 0; col <= row+1; col++){
            cout << "* ";
        }

        cout << "😎" << endl;
    }
}