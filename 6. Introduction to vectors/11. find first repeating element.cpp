// https://practice.geeksforgeeks.org/problems/first-repeating-element4018/1
// see balaji the question have hidden restrictions please visit the website and then solve the questions. 
// i mean dont relie on the file name discripiton only.

#include <unordered_map>
class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        // code here
        // code here
    
        // for(int i=0; i<n-1; i++){
        //     for (int j= i+1; j<n; j++){
        //         if(arr[i]==arr[j]){
        //             return i+1;
        //         }
        //     }
        // }
        
        // return -1;
        
        
        
        // 2nd approach hashmap wala approach.
        unordered_map<int, int> hash;
        int n = arr.size();
        
        for(int i=0; i<n; i++){
            hash[arr[i]]++;
            // if(hash[arr[i]]>=2){
            //     return i+1;
            // }
        }
        
        for(int i = 0;i<n;i++){
            if(hash[arr[i]]>=2){
                return i+1;
            }
        }
        return -1;
    }
};