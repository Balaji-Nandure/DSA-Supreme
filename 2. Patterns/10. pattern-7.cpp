#include<iostream>
using namespace std;

int main (){
    // inverted half pyramid 
    int height = 5;

    for (int row=0;row<height;row++){
        for (int col=0; col + row < height; col++){
            cout << col+1 << " ";
        }
        cout << endl;
    }

}