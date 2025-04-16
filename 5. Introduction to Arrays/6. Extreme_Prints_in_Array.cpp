#include<iostream>
using namespace std;

// This method very popularly known as two pointers approach. very very imp.
void printExtreams(int arr[], int size){
    int start =0;
    int end = size-1;

    while(start <= end){
        if(start == end){ // in case of array size is odd
            cout<< arr[start] << " "; // print middle elemtn only once
            break; // and in this case dont forget to break the loop
        }
        
        cout << arr[start] << " ";
        cout << arr[end] << " ";
        start++;
        end--;
    }
}

int main(){
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    printExtreams(arr, size);
    return 0;
}