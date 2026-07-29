// You are given an integer array nums.

// You replace each element in nums with the sum of its digits.

// Return the minimum element in nums after all replacements.

class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        vector<int>arr(n, 0);
        int q, r, x;
        for(int i=0; i<n; i++){
            x = nums[i];
            while(x>0){
                q = x/10;
                r = x%10;
                x = q;
                arr[i] += r;
            }
        }
        for(int j=n-1; j>0; j--){
            for(int l=0; l<j; l++){
                if(arr[l]>arr[l+1]){
                    swap(arr[l], arr[l+1]);
                }
                else{
                    continue;
                }
            }
        }
        return arr[0];
    }
};