

// This algorithm is almost same as dutch national flag algorithm

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{0,1,0,1,1,0,1,0,1,1,0,1,0};
    int s = 0; 
    int e = arr.size() - 1;
    int i=0;

    while(s<=e){
        // 🤖 Simple rule:
        // If 0: send it to the front → safe to do i++ because we know the swapped-in element is already processed.
        // If 1: send it to the back → don’t do i++ because the swapped-in element could be a 0 or 1 (still needs checking).

        if(arr[i] == 0){
            swap(arr[s], arr[i]);
            i++;
            s++;
        } 

        if(arr[i] == 1){
            swap(arr[i], arr[e]);
            e--;
        }
    }

    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
