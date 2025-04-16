#include<iostream>
using namespace std;

int zeroCount(int arr[], int size){
    int count = 0;
    for (int i=0; i<size; i++){
        if(arr[i] == 0){
            count++;
        }
    }

    return count;
}

int oneCount(int arr[], int size){
    int count = 0;

    for(int i=0; i< size; i++){
        if(arr[i]==1){
            count++;
        }
    }

    return count;
}

int main(){
    int arr[10] = {1,1,0,1,0,0,1,0,1,1};
    int size = 10;
    cout << zeroCount(arr, size) << endl;
    cout << oneCount(arr, size) << endl;
    return 0;
}