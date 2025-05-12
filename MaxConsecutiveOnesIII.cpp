Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
Output: 6
Explanation: [1,1,1,0,0,1,1,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.

Code:
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zeros = 0;
        int left =0 ;
        int maxsize = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                zeros++;
            }
            while(zeros > k){
                if(nums[left] == 0){
                    zeros--;
                }
                left++;
            }
            maxsize = max(maxsize, i-left+1);
        }
        return maxsize;
    }
};
