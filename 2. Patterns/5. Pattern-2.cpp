#include<iostream>
using namespace std;

int main (){
    // solid square
    int side = 8;
    for(int row = 0 ; row < side; row++){
        for (int col=0; col < side; col++){
            cout << "* ";
        }

        cout << "❤" <<endl;
    }
}