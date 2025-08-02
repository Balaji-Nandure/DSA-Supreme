#include <iostream>
using namespace std;

int main() {
    int arr[3][3]; // 2d array with 3 rows and 3 columns

    //Initialisation
    int brr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    // how to access elemets in 2d array
    cout << brr[2][2] << endl; // will print 9
    cout << brr[0][0] << endl; // will print 1
    cout << brr[1][2] << endl; // will print 6

    // Row wise access of 2d array
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << brr[i][j] << " ";
        }
        cout<<endl;
    }

    // column wise access
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << brr[j][i] << " ";
        }
        cout<<endl;
    }

    // Input 2d array;
    cout << " Please enter 9 elements" << endl;
    int crr[3][3];
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cin>>crr[i][j];
        }
    }

    // print crr array in rrow wise pattern
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << crr[i][j] << " ";
        }
        cout<<endl;
    }


    return 0;
}