#include<iostream>
#include<vector>
using namespace std;

// Learn about vectors creation.
findUniqueElement(vector<int> arr){
    int ans = 0; // xor with zero gives number itself
    for(int i=0; i<arr.size(); i++){
        ans = ans ^ arr[i]; // exor will cancel out all the repeated elements and in the end only unique element will remain
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements "<<endl;
    for(int i = 0;i<arr.size();i++){
        cin>>arr[i];
    }

    for(int i = 0;i<arr.size();i++){
        cout<<arr[i] << " ";
    }
    int uniqueElement = findUniqueElement(arr);
    cout<< endl <<"Unique element in the array is "<<uniqueElement<<endl;
    return 0;
}