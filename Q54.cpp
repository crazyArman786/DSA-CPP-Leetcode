// Given an unsorted integer array nums. Return the smallest positive integer that is not present 
// in nums.

// You must implement an algorithm that runs in O(n) time and uses O(1) auxiliary space.

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       sort(nums.begin(), nums.end());
       int hash = 1, n = nums.size();
       for(int i=0; i<n; i++){
        if(nums[i]<1 || i>0 && nums[i]==nums[i-1]){
            continue;
        }
        if(nums[i]!=hash){
            return hash;
        }
        else{
            hash++;
        }
       }
       return hash;
    }
};