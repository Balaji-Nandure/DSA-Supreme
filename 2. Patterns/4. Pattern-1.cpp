#include<iostream>
using namespace std;

int main (){
    // Solid rectangle
    int length = 10;
    int height = 4;

    for (int row = 0; row < height; row++){
        for (int col = 0; col < length; col++){
            cout << "* ";
        }
        cout << "😂" << endl;
    }
}