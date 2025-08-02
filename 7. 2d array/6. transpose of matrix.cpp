#include<iostream>
using namespace std;

void print2dArray(int arr[][3], int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void transpose(int arr[][3], int rows, int cols){
    for(int i=0; i<rows; i++){
        // for j we are only going upto i. to not to swap elements two times. by doing this we are swapping only elements below main axis that too only once
        for(int j=0; j<i; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
}
// A non-square matrix cannot be transposed in-place using a 2D array and requires O(R × C) extra space. (i.e takes space complexity)
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int rows = 3;
    int cols = 3;

    cout << "Printing before transpose " << endl ;
    print2dArray(arr, rows, cols);

    cout << "Transpose started" << endl;
    transpose(arr, rows, cols);

    cout << "Printing after transpose " << endl ;
    print2dArray(arr, rows, cols);
    return 0;
}