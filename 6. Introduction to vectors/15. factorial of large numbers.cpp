// factorial of large integer not possible to store in integer. because it is very very big value
// so we will use vector to store the factorial of large integer.
// https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> factorial(int N) {

    vector<int> result;
    result.push_back(1);  // Start with 1

    for(int num = 2; num <= N; num++) {
        int carry = 0;  
        
        // Multiply num with every digit
        for(int i = 0; i < result.size(); i++) {
            int product = result[i] * num + carry;
            result[i] = product % 10;
            carry = product / 10;
        }

        // Add remaining carry as new digits
        while(carry) {
            result.push_back(carry % 10);
            carry /= 10;
        }
    }

    // Reverse the result to get the actual number  
    reverse(result.begin(), result.end());
    return result;
}

int main(){
    int N;
    cin >> N;
    vector<int> result = factorial(N);
    for(int i=0; i<result.size(); i++){
        cout << result[i];
    }
    return 0;
}
