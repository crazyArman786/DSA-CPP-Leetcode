// Given an integer array nums, find three numbers whose product is maximum and return the maximum 
// product.


class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size()-1;
        int ans;
        if(nums[0]>=0){
            ans = nums[n]*nums[n-1]*nums[n-2];
        }
        for(int i=0; i<=n; i++){
            if(nums[0]<0 && nums[1]<0){
                ans = max(nums[0]*nums[1]*nums[i], nums[n]*nums[n-1]*nums[n-2]);
            }
        }
        return ans;
    }
};