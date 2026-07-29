// Given an integer array nums, return the greatest common divisor of the smallest number and 
// largest number in nums.

// The greatest common divisor of two numbers is the largest positive integer that evenly divides 
// both numbers.

class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size(), start=nums[0], end = nums[n-1], ans=1;
        for(int i=start; i>0; i--){
            if(start%i==0 && end%i==0){
                ans = i;
                return ans;
            }
        }
        return ans;
    }
};