Input: nums = [1,2,3,4]
Output: [24,12,8,6]

code:
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int prefix = 1;
        int suffix = 1;
        vector<int> res(nums.size(), 1);
        for(int i=0;i<nums.size();i++){
            res[i] = prefix;
            prefix = prefix*nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--){
            res[i] = res[i]*suffix;
            suffix = suffix*nums[i];
        }
        return res;
    }
};
