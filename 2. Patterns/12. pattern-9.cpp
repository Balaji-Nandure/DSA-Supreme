#include<iostream>
using namespace std;

int main (){
    // Hollow square pattern
    int side;
    cin>>side;

    // for (int row=0;row<side;row++){
    //     for (int col=0; col < side; col++){
    //         if (row == 0 || col==0 || row==(side-1) || col==(side-1) ){
    //             cout << "* ";
    //         }
    //     }
    //     cout << endl;
    // }


    // Dont forget the else condition. otherwise pattern wont print properly
    for (int row=0;row<side;row++){
        for (int col=0; col < side; col++){
            if (row == 0 || col==0 || row==(side-1) || col==(side-1) ){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

}