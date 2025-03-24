#include<iostream>
using namespace std;

// whenever you pass array to a function it is passes as pass by refrence and not by value

void incr(int arr[], int size){ // best practice to pass size of array along with array.
    arr[0]+=10;
} 

int main(){
    int arr[5] = {1,2,3,4,5};
    cout << arr[0] << endl;

    incr(arr, 5);
    cout << arr[0]; // actual array is also uopdated i.e pass by refrence.
    return 0;
}