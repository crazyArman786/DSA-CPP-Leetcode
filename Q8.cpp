// Given an array of integers nums which is sorted in ascending order, and an integer target, write a function
//  to search target in nums. If target exists, then return its index. Otherwise, return -1.

// You must write an algorithm with O(log n) runtime complexity.

class Solution {
public:
    int search(vector<int>& nums, int target) {
    int n = nums.size();
    int mid, start=0, end=n;
    for(int i=0; i<n; i++){
        mid = (start+end)/2;
        if(nums[mid]==target){
            return mid;
            break;
        }
        else if(nums[mid]<target){
            right;
            start=mid;
        }
        else if(nums[mid]>target){
            left;
            end=mid;
        }
    }
    return -1;
    }
};