// Sort array of 0, 1, 2
// DNF algo i.e 3 pointers approach (see method 3)

class Solution {
public:
    // the & in below line represents that array is passed by reference.
    void sortColors(vector<int>& nums) {
        // method 1:  we cant use this method
        // sort(nums.begin(), nums.end());

        // method 2: counting method
        int zeros, ones, twos;
        zeros = ones = twos = 0;

        // First count the numbers
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                zeros++;
            } else if(nums[i] ==1){
                ones++;
            } else {
                twos++;
            }
        }

        // now spread the numbers
        int i = 0;
        while(zeros--){
            nums[i] = 0;
            i++;
        }
        while(ones--){
            nums[i] = 1;
            i++;
        }
        while(twos--){
            nums[i] = 2;
            i++;
        }


    // Method 3: 3 pointers approach or dutch national flag approach
    
    int low = 0, mid = 0, high = nums.size() - 1;

        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if(nums[mid] == 1){
                mid++;
            } else { // nums[mid] == 2
                swap(nums[mid], nums[high]);
                high--;
            }
        }
        
    }
};