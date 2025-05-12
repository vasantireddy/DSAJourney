Container with more water
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Code:
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int maxarea = 0;
        for(int i=0;i<height.size();i++){
            int width = right - left;
            int h1 = min(height[left], height[right]);
            maxarea = max(maxarea, width*h1);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxarea;
    }
};
