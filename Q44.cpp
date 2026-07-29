// Given an integer array nums of length n and an integer target, find three integers at distinct indices 
// in nums such that the sum is closest to target.

// Return the sum of the three integers.

// You may assume that each input would have exactly one solution.

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int closest = nums[0]+nums[1]+nums[2];
        int sum;
        for(int i=0; i<nums.size(); i++){
            int start=i+1, end = nums.size()-1;
            while(start<end){
                sum = nums[i]+nums[start]+nums[end];
                if(abs(target-sum) < abs(target-closest)){
                    closest=sum;
                }
                if(sum==target){
                    return sum;
                }
                else if(sum<target){
                    start++;
                }
                else if(sum>target){
                    end--;
                }
            }
        }
        return closest;
    }
};