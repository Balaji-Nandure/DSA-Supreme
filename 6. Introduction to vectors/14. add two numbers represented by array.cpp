
// https://practice.geeksforgeeks.org/problems/sum-of-two-numbers-represented-as-arrays3110/1

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to add two arrays digit-wise
vector<int> findSum(vector<int>& arr1, vector<int>& arr2) {
    int n = arr1.size();
    int m = arr2.size();
    
    int i = n - 1;
    int j = m - 1;
    int carry = 0;
    vector<int> result;

    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;
        if (i >= 0) sum += arr1[i--];
        if (j >= 0) sum += arr2[j--];
        
        result.push_back(sum % 10);
        carry = sum / 10;
    }

    reverse(result.begin(), result.end());
    return result;
}

// Main function to test the code
int main() {
    // Example 1
    vector<int> arr1 = {5, 6, 3};
    vector<int> arr2 = {8, 4, 2};

    vector<int> result = findSum(arr1, arr2);

    cout << "Sum: ";
    for (int digit : result) {
        cout << digit;
    }
    cout << endl;

    // Example 2
    vector<int> a = {2, 2, 7, 5, 3, 3};
    vector<int> b = {4, 3, 3, 8};
    vector<int> res2 = findSum(a, b);

    cout << "Sum: ";
    for (int digit : res2) {
        cout << digit;
    }
    cout << endl;

    return 0;
}
