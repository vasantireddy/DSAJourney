Input: gain = [-5,1,5,0,-7]
Output: 1
Explanation: The altitudes are [0,-5,-4,1,1,-6]. The highest is 1.

Code:
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int minn = 0;
        int sum = 0;
        for(int i=0;i<gain.size();i++){
            sum = sum + gain[i];
            minn = max(minn, sum);
        }
        return minn;
    }
};
