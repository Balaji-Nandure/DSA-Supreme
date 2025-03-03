#include<iostream>
using namespace std;

int main (){
    // Numeric half pyramid
    int height = 9;
    for(int row = 0; row < height; ++row){
        for(int col = 0; col < row +1 ; ++col){
            cout << col+1 << " " ;
        }

        cout << "✌" << endl;
    }
}