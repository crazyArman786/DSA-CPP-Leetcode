// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, 
// and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int x=0,n = nums.size();
        sort(nums.begin(), nums.end());
        if(nums[0]>0 || n<3){
            return ans;
        }
        for(int i=0; i<n-2; i++){
        int start=i+1, end=n-1;
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }
            while(start<end){
                if(nums[i]+nums[start]+nums[end]==0){
                    ans.push_back({nums[i], nums[start], nums[end]});
                    while(start<end && nums[start] == nums[start+1]) start++;
                    while(start<end && nums[end] == nums[end-1]) end--;

                    start++;
                    end--;
                }
                else if(nums[i]+nums[start]+nums[end]<0){
                    start++;
                }
                else{
                    end--;
                }
            }
        }
        return ans;
    }
};