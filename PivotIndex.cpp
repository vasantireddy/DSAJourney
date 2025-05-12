Input: nums = [1,7,3,6,5,6]
Output: 3
Explanation:
The pivot index is 3.
Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
Right sum = nums[4] + nums[5] = 5 + 6 = 11

Code:
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0;
        int right = 0;
        for (int i = 0; i < nums.size(); i++) {
            right = right + nums[i];
        }
        for (int i = 0; i < nums.size(); i++) {
            right = right - nums[i];
            if (left == right) {
                return i;
            }
            left = left + nums[i];
        }
        return -1;
    }
};
