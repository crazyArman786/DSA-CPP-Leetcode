// Given a sorted array of distinct integers and a target value, return the index if the target is found. If 
// not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0, end = n-1, mid, index=n;
        while(start<=end){
            mid = (start+end)/2;
            if(nums[mid]==target){
                return mid;
                break;
            }
            else if(nums[mid]<target){
                start = mid+1;
            }
            else if(nums[mid]>target){
                index = mid;
                end = mid-1;
            }
        }
        return index;
    }
};