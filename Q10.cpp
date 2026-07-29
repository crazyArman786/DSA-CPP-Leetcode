// You are given an integer mountain array arr of length n where the values increase to a peak element and
//  then decrease.

// Return the index of the peak element.

// Your task is to solve it in O(log(n)) time complexity.

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int start=0, end=n-1, mid, peak=0;
        while(start<=end){
            mid= (start+end)/2;
            if(arr[mid+1]>arr[mid]){
                peak = mid;
                start = mid+1;
            }
            else if(arr[mid-1]>arr[mid]){
                peak = mid;
                end = mid-1;
            }
            else{
                peak = mid;
                break;
            }
        }
        return peak;
    }
};