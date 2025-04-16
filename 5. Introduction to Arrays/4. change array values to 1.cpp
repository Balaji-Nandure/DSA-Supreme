#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,5,9,7,3,6,4,2,8};

    for(int i=0; i<9; i++){
        arr[i] = 1;
    }

    for(int i=0; i<9; i++){
        cout << arr[i] << "-";
    }
}