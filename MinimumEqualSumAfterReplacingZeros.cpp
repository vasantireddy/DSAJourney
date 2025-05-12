Input: nums1 = [3,2,0,1,0], nums2 = [6,5,0]
Output: 12
Explanation: We can replace 0's in the following way:
- Replace the two 0's in nums1 with the values 2 and 4. The resulting array is nums1 = [3,2,2,1,4].
- Replace the 0 in nums2 with the value 1. The resulting array is nums2 = [6,5,1].
Both arrays have an equal sum of 12. It can be shown that it is the minimum sum we can obtain.

Code:
class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1 = 0;
        int z1 = 0;
        long long sum2 = 0;
        int z2 = 0;
        for (int i = 0; i < nums1.size(); i++) {
            if (nums1[i] == 0) {
                z1++;
            }
            sum1 = sum1 + nums1[i];
        }
        for (int i = 0; i < nums2.size(); i++) {
            if (nums2[i] == 0) {
                z2++;
            }
            sum2 = sum2 + nums2[i];
        }
        if (sum1 + z1 > sum2 && z2 == 0 || sum2 + z2 > sum1 && z1 == 0) {
            return -1;
        }
        return max(sum1 + z1, sum2 + z2);
    }
};
