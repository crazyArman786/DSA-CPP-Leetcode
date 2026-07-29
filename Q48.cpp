// Given an integer array nums, return the maximum difference between two successive elements in its sorted 
// form. If the array contains less than two elements, return 0.

// You must write an algorithm that runs in linear time and uses linear extra space.

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mad=0, n= nums.size();
        if(n==0 || n==1){
            return 0;
        }
        for(int i=0; i<n-1; i++){
            if(nums[i+1]-nums[i]>mad){
                mad = nums[i+1]-nums[i];
            }
        }
        return mad;
    }
};