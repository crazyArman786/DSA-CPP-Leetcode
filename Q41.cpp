// Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], 
// nums[c], nums[d]] such that:

// 0 <= a, b, c, d < n
// a, b, c, and d are distinct.
// nums[a] + nums[b] + nums[c] + nums[d] == target
// You may return the answer in any order.

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(i>0 && nums[i]==nums[i-1])
                continue;
            for(int j=i+1; j<n-2; j++){
                if(j>i+1&& nums[j]==nums[j-1])
                    continue;
            int start = j+1, end = n-1;
                while(start<end){
                    long int sum = 1LL*nums[i]+nums[j]+nums[start]+nums[end];
                    if(sum==target){
                        ans.push_back({nums[i],nums[j],nums[start],nums[end]});
                        while(start<end && nums[start]==nums[start+1]) start++;
                        while(start<end && nums[end]==nums[end-1]) end--;
                        start++;
                        end--;
                    }
                    else if(sum<target){
                        start++;
                    }
                    else{
                        end--;
                    }
                }
            }
        }
        return ans;
    }
};