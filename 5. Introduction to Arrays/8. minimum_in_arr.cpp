#include<iostream>
using namespace std;

int findMin(int arr[], int size){
    int min = INT_MAX;

    for(int i=0; i<size; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }

    return min;
}

int main(){
    int arr[] = {1,5,9,8,6,3,2,7};
    int size = 8;

    int minelement = findMin(arr, size);
    cout << minelement;
    return 0;
}