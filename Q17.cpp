// Given n non-negative integers representing an elevation map where the width of each bar is 1, compute 
// how much water it can trap after raining.


class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int leftmax=0, rightmax=0, maxheight = height[0], index = 0;
        for(int i=1; i<n; i++){
            if(maxheight<height[i]){
                maxheight = height[i];
                index = i;
            }
        }
        for(int i=0; i<index; i++){
            if(leftmax>height[i])
        }
        return water;
    }
};