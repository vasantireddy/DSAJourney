Input: nums = [1,1,0,1]
Output: 3
Explanation: After deleting the number in position 2, [1,1,1] contains 3 numbers with value of 1's.

Code:
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0;
        int zeros = 0;
        int res = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                zeros++;
            }
            while(zeros>1){
                if(nums[left] == 0){
                    zeros--;
                }
                left++;
            }
            res = max(res, i-left);
        }
        return res;
    }
};
