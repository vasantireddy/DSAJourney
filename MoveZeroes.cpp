Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Code:
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
