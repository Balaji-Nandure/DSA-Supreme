// https://practice.geeksforgeeks.org/problems/common-elements1132/1

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    vector<int> commonElements(vector<int>& A, vector<int>& B, vector<int>& C) {
        int n1 = A.size(), n2 = B.size(), n3 = C.size();
        int i = 0, j = 0, k = 0;
        vector<int> result;
        int last = INT_MIN;

        while (i < n1 && j < n2 && k < n3) {
            if (A[i] == B[j] && B[j] == C[k]) {
                if (A[i] != last) {
                    result.push_back(A[i]);
                    last = A[i];
                }
                i++; j++; k++;
            } else {
                /*
                If all three elements are equal, great! → It's a common element. 
                But if they are not equal, then the smallest one can never be common (because the other arrays have already moved ahead of it).
                So: We discard the smallest value by incrementing the pointer pointing to it.
                */
                // you cant compare 3 values at a time so use nested min function
                int minVal = min(A[i], min(B[j], C[k]));
                if (A[i] == minVal) i++;
                if (B[j] == minVal) j++;
                if (C[k] == minVal) k++;
            }
        }

        return result;
    }
};

int main() {
    vector<int> A = {1, 5, 10, 20, 40, 80};
    vector<int> B = {6, 7, 20, 80, 100};
    vector<int> C = {3, 4, 15, 20, 30, 70, 80, 120};

    Solution obj;
    vector<int> common = obj.commonElements(A, B, C);

    cout << "Common elements: ";
    for (int val : common) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
