#include<iostream>
using namespace std;

int main (){
    int height = 10;

    for (int row = 0; row < height; ++row){
        for (int col = 0; col < height - row; ++col){
            cout << "* ";
        }

        cout << "👌" << endl;
    }
}