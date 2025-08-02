class Solution {
    public:
        int findDuplicate(vector<int>& nums) {
            // Method 1 ////////////////////
            // // we are not supposed to modify this array.
            // sort(nums.begin(), nums.end());
            // for(int i=0; i<nums.size()-1; i++){
            //     if(nums[i] == nums[i+1]){
            //         return nums[i];
            //     }
            // };
    
            // return -1;
    
            ////////////Method 2 by marking array as visited (i.e -ve
            /// number)/////////////////
            ////// but he question is asking for wihtout modifying the array
            int ans = -1;
            for (int i = 0; i < nums.size(); i++) {
                // making it absolute because array value canb e negative.
                int index = abs(nums[i]);
    
                // checking if already visited
                if (nums[index] < 0) {
                    ans = index;
                    break;
                }
    
                // marking index value as negative
                nums[index] *= -1;
            }
    
            ///// again make -ve numbers to positive to make array as it is
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] < 0) {
                    nums[i] *= -1;
                }
            }
    
            return ans;
    
        }
    };