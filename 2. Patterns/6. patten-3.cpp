#include<iostream>
using namespace std;

int main (){
    // Hollow Rectangle
    int cols = 7;
    int rows = 5;

    for (int row = 0; row < rows; row++){
        for (int col=0; col<cols; col++){
            // Very very nice method
            if (row == 0 || row == (rows-1) || col == 0 || col == (cols-1)){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }

        cout << "⭐" <<endl;
    }
}