// You are given an integer array nums.

// Choose exactly one pair of distinct indices i and j. The strength of the pair is defined as 
// (nums[i] * nums[j]) / gcd(nums[i], nums[j])2.

// Return the maximum strength over all possible pairs.

// The term gcd(a, b) denotes the greatest common divisor of a and b.


class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n = nums.size(); long long ans=0;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                long long g = gcd(nums[i], nums[j]);
                long long comp = (1LL*nums[i]*nums[j])/(1LL*g*g);
                ans = max(ans, comp);
            }
        }
        return ans;
    }
};