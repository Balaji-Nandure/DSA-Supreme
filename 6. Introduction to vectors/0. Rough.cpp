#include <iostream>
#include <vector>
#include <climits>
#include <string>
#include <cmath>
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
// function for maximum sum subarray of size k using sliding window
// Instead of calculating sum again and again for each subarray,
// just slide the window and subtract the first and add the new.

int maxSumSubarrayOfSizeK(vector<int> &arr, int k){
    int n = arr.size();

    if(n<k) return -1;

    int maxSum = INT_MIN;
    int windowSum = 0;

    // calculate sum of first window
    for(int i=0; i<k; i++){
        windowSum += arr[i];
    }
    maxSum = windowSum;

    // slide the window

    for(int i=k; i<n; i++){
        windowSum = windowSum - arr[i-k] + arr[i];
        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}

// function to convert string from binary to decimal
int binaryToDecimal(string &binary){
    int n = binary.size();
    int result = 0;
    for(int i=n-1; i>=0; i--){
        char ch = binary[i];
        // convert char to int using ascii value of 0 is 48 and 1 is 49
        int num = ch - '0';
        // result = result*2 + num;
        result += num * (1<<(n-i-1));
    }
    return result;
}

string decimalToBinary(int n){
    string result = "";
    while(n>0){
        int bit = n%2;
        result = to_string(bit) + result;
        n = n/2;
    }
    return result;
}

int countSetBits(int n){
    int count = 0;
    while(n>0){
        n &= (n-1);
        count++;
    }
    return count;
}

// given a number n, find a number which is power of 2 and smaller to n
int nextPowerOf2(int n){
    // int count = 0;
    // while(n>0){
    //     n = n>>1;
    //     count++;
    // }
    // return 1<<(count-1);

    
    int x = n;
    int temp;
    while(x!=0){
        temp = x;
        x = x&(x-1);    
    }

    cout << temp << endl;
    return temp;
}

// minimum bit flips required to convert a number to another number
int minBitFlips(int a, int b){
    int x = a^b;
    int count = 0;
    while(x!=0){
        x &= (x-1);
        count++;
    }
    return count;
}

// every element appears twice except one, find that element

int findUnique(vector<int> &arr){
    int ans = 0;
    for(int i=0; i<arr.size(); i++){
        ans = ans^arr[i];
    }
    return ans;
}

// every element appears twice except two, find those elements
// Function to find the two unique numbers in an array where every other element appears exactly twice
// Approach: Bit Manipulation (XOR)
// Detailed Explanation:
// 1. XOR all elements in the array. The result will be XOR of the two unique numbers (let's call them x and y), because all duplicate numbers cancel out (a^a = 0).
// 2. Find any set bit (bit with value 1) in the XOR result. This bit must be different between x and y (because that's why it survived the XOR).
// 3. Partition the array into two groups based on whether this bit is set or not. The two unique numbers will fall into different groups.
// 4. XOR all numbers in each group separately. All duplicate numbers will cancel out, and each group will be left with one unique number.

vector<int> findTwoUnique(vector<int> &arr) {
    int xorAll = 0; // This will hold XOR of all elements

    // Step 1: XOR all elements. Duplicates cancel out, so xorAll = x ^ y (where x and y are the unique numbers)
    for (int i = 0; i < arr.size(); i++) {
        xorAll ^= arr[i];
    }

    // Step 2: Find a set bit in xorAll (rightmost set bit is common)
    // This bit is set in one unique number and not in the other
    int setBit = xorAll & (~(xorAll - 1));
    // Explanation:
    // xorAll - 1 flips all bits after the rightmost set bit (including the set bit itself)
    // ~ (xorAll - 1) inverts all bits, so only the rightmost set bit remains set in the mask
    // ANDing with xorAll isolates the rightmost set bit

    int num1 = 0, num2 = 0; // These will hold the two unique numbers

    // Step 3: Partition numbers into two groups and XOR separately
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] & setBit) {
            // The bit is set in this number
            num1 ^= arr[i];
        } else {
            // The bit is not set in this number
            num2 ^= arr[i];
        }
    }

    // Step 4: num1 and num2 are the two unique numbers
    // Return them in sorted order for consistency
    if (num1 > num2) std::swap(num1, num2);
    return {num1, num2};
}


// Leetcode 2614: Prime In Diagonal
// Given a square matrix, find the largest prime number present on either of its diagonals.
// If no prime exists, return 0.

// Helper function to check if a number is prime
// Faster primality test using 6k +/- 1 optimization
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Function to find the largest prime on either diagonal of a square matrix
int diagonalPrime(vector<vector<int>>& mat) {
    int n = mat.size();
    int maxPrime = 0;
    for (int i = 0; i < n; ++i) {
        // Main diagonal element
        if (isPrime(mat[i][i])) {
            maxPrime = max(maxPrime, mat[i][i]);
        }
        // Anti-diagonal element
        if (isPrime(mat[i][n-1-i])) {
            maxPrime = max(maxPrime, mat[i][n-1-i]);
        }
    }
    return maxPrime;
}


class Node { // proper linkedlist node class
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void displayLL(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

// // pirnt linked list
void printLinkedList(Node *head){
    // if we use temp->next!=NULL, then it will not print the last node
    // if we use temp!=NULL, then it will print the last node
    
    Node *temp = head;
    while(temp!=NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

// size of linked list
int sizeOfLL(Node *head){
    Node *temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

// display linked list recursively
// Recursive function to display the elements of a linked list
// Prints all node values from head to tail, separated by spaces
// Ends with a newline after the last node
void displayLLRec(Node *head){
    // Base case: if the current node is NULL, we've reached the end of the list
    if(head == NULL){
        cout << endl; // Print newline to end the output
        return;       // Exit the function
    }
    // Print the value of the current node followed by a space
    cout << head->val << " ";
    // Recursively call the function for the next node in the list
    displayLLRec(head->next);
}

int main() {
    // lets start learning linked list in best possible way
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);

    // here we will directly use b instead of &b because b is already a pointer to a node
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;

    displayLLRec(a);

    // cout << sizeOfLL(a) << endl;
    // printing values
    // cout << a->val << endl;
    // display(a);

    // this is best way becuase we are using new keyword to create a new node
    // and we are not using the constructor to create a new node
    // new keyword is used to create a new node in the heap memory

    // // 10 20 30 40
    // Node a(10);
    // // a.val = 10;
    // Node b(20);
    // // b.val = 20;
    // Node c(30);
    // // c.val = 30;
    // Node d(40);
    // // d.val = 40;

    // // cout << a.val << " 😁 " << a.next << endl;
    // /// linking linked list
    // a.next = &b;
    // b.next = &c;
    // c.next = &d;
    // d.next = NULL;  

    // Node *ptr = &a;
    // printLinkedList(ptr);
    // // ptr->val = 200;

    // cout << ptr->next->next->val  << endl;
    // cout << ptr->next->next->next->val  << endl;

    
    // cout << a.val << " 😁 " << a.next << " " << &b << endl;

    // vector<int> arr = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16, 107};
    // // cout << findUnique(arr) << endl;
    // vector<int> ans = findTwoUnique(arr);
    // cout << ans[0] << " " << ans[1] << endl;

    // int minFlips = minBitFlips(10, 7);
    // cout << minFlips << endl;

    // string binary = "101";
    // cout << binaryToDecimal(binary) << endl;

    // int decimal = 10;
    // cout << decimalToBinary(decimal) << endl;

    // cout << __builtin_popcount(100) << endl;
    // cout << countSetBits(10) << endl;

    // cout << nextPowerOf2(8) << endl;
    
    // nextPowerOf2(10000);


    // vector<int> a = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    // cout << maxSumSubarrayOfSizeK(a, 3) << endl;

    // Example array
    // vector<int> arr1 = {5, 2, 3, 1, 1};
    // cout << "Can partition: " << canPartition(arr1) << endl;

    // // true example
    // vector<int> arr2 = { 1, 5, 5, 11 };
    // cout << "Can partition: " << canPartition(arr2) << endl;
    
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
