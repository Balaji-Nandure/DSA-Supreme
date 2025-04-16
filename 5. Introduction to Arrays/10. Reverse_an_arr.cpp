#include<iostream>
using namespace std;



int main(){
    int arr[] = {1,5,9,8,6,3,2,7};
    int size = 8;

    int start =0; 
    int end = size-1;

    while(start <= end){
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;

        // Alternate approach for swapping
        swap(arr[start],arr[end]);

        start++;
        end--;
    }

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}