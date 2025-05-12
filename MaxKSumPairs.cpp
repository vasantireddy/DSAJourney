Input: nums = [1,2,3,4], k = 5
Output: 2
Explanation: Starting with nums = [1,2,3,4]:
- Remove numbers 1 and 4, then nums = [2,3]
- Remove numbers 2 and 3, then nums = []
There are no more pairs that sum up to 5, hence a total of 2 operations.

Code:

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = nums.size()-1;
        int cnt = 0;
        while(left<right){
            if(nums[left]+nums[right] == k){
                cnt++;
                left++;
                right--;
            }
            else if(nums[left]+nums[right] > k){
                right--;
            }
            else{
                left++;
            }
        }
        return cnt;
    }
};
