#include<iostream>
using namespace std;

int findMax(int arr[], int size){
    int max = INT_MIN;

    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    return max;
}

int main(){
    int arr[] = {1,5,9,8,6,3,2,7};
    int size = 8;

    int maxelement = findMax(arr, size);
    cout << maxelement;
    return 0;
}