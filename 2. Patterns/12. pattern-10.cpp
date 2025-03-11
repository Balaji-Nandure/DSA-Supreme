#include<iostream>
using namespace std;

int main (){
    // Hollow inverted half pyramid
    int side;
    cout << "Please enter side of the triangle: ";
    cin >> side;

    for (int row=0;row<side;row++){
        for (int col=0; col < side; col++){
            if (row == 0 || col==0 || (row+col) == (side-1)){
                cout << "* " ;
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

}