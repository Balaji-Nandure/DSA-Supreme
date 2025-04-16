#include<iostream>
using namespace std;

int findElement(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            cout << "Element found at index " << i << endl ;
            return true;
        }
    }
    return false;
}

int main(){
    int arr[] = {3,5,7,1,9,2,4,6,8};
    int size = 9;
    int key = 2;

    cout << findElement(arr, size, key);
    return 0;
}