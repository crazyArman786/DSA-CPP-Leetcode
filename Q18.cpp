// Given a positive integer n, write a function that returns the number of set bits in its binary 
// representation (also known as the Hamming weight).

class Solution {
public:
    int hammingWeight(int n) {
        int ans = 0, rem, quo=1, num=n;
        while(quo!=0){
            quo = num/2;
            rem = num%2;
            num = quo;
            ans+=rem;
        }
        return ans;
    }
};