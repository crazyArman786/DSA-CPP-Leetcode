// Given an array nums of distinct integers, return all the possible permutations. You can return the answer 
// in any order.


class Solution {
public:
    void permut(vector<int>& nums, vector<vector<int>> &ans, int index){
        if(nums.size() == index){
            ans.push_back(nums);
            return;
        }
        for(int i=index; i<nums.size(); i++){
            swap(nums[index], nums[i]);
            permut(nums, ans, index+1);
            swap(nums[index], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        permut(nums, ans, 0);
        return ans;
    }
};