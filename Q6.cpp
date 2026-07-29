// The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

// For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
// Given an integer num, return its complement.


class Solution {
public:
    int findComplement(int num) {
        long int ans=0, rem, mul=1;
        while(num>0){
            rem = num%2;
            num /=2;
            if(rem==0) 
            rem+=1;
            else if(rem==1) 
            rem-=1;
            ans = ans+rem*mul;
            mul = mul*2;
        }
        return ans;
    }
};