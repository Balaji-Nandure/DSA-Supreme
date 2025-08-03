#include <iostream>
#include <vector>
using namespace std;

// Function to calculate prefix sum array
vector<int> calculatePrefixSum(vector<int> &arr) {
    int n = arr.size();
    vector<int> prefixSum(n);
    
    // First element of prefix sum is same as first element of original array
    prefixSum[0] = arr[0];
    
    // Calculate prefix sum for remaining elements
    for(int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }
    
    return prefixSum;
}

// Function to print array
void printArray(const vector<int>& arr) {
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// function to check if array can be partitioned into two subarrays with equal sum
bool canPartition(vector<int> &arr){
    int totalSum = 0;
    for(int ele : arr){
        totalSum += ele;
    }

    if(totalSum % 2 ==1) return false;

    int prefixSum = 0;
    for(int i=0; i<arr.size(); i++){
        prefixSum += arr[i];

        if(prefixSum == totalSum/2 ) return true;
    }

    return false;
}

int main() {
    // Example array
    vector<int> arr1 = {5, 2, 3, 1, 1};
    cout << "Can partition: " << canPartition(arr1) << endl;

    // true example
    vector<int> arr2 = { 1, 5, 5, 11 };
    cout << "Can partition: " << canPartition(arr2) << endl;
    
    // cout << "Original Array: ";
    // printArray(arr);
    
    // // Calculate prefix sum
    // vector<int> prefixSum = calculatePrefixSum(arr);
    
    // cout << "Prefix Sum Array: ";
    // printArray(prefixSum); 
    
    // // Example: Get sum of elements from index 1 to 3 (inclusive)
    // int left = 1, right = 3;
    // int sum = prefixSum[right] - (left > 0 ? prefixSum[left-1] : 0);
    // cout << "Sum of elements from index " << left << " to " << right << ": " << sum << endl;
    
    return 0;
}
