#include<iostream>
using namespace std;

int maxElemnt(int a[][3], int rows, int cols){
    int ans = INT_MIN;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(a[i][j] > ans){
                ans = a[i][j];
            }
        }
    }

    return ans;
}

int minElemnt(int a[][3], int rows, int cols){
    int ans = INT_MAX;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(a[i][j] < ans){
                ans = a[i][j];
            }
        }
    }

    return ans;
}

int main(){
    int arr [3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int rows = 3;
    int cols = 3;

    cout << "Maximum " <<maxElemnt(arr, rows, cols) << endl;
    cout << "Minimum " <<minElemnt(arr, rows, cols);
    return 0;
}