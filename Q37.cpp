// You are given an integer n.

// Form a new integer x by concatenating all the non-zero digits of n in their original order. If there are 
// no non-zero digits, x = 0.

// Let sum be the sum of digits in x.

// Return an integer representing the value of x * sum.

class Solution {
public:
    long int reverse(long int m){
        long int r, anv=0;
        while(m>0){
            r = m%10;
            m = m/10;
            anv = r+anv*10;
        }
        return anv;
    }
    long long sumAndMultiply(int n) {
        long long sum=0, ans=0, i=0, num = 0;
        while(n>0){
            int rem = n%10;
            sum+= rem;
            n = n/10;
            if(rem>0){
                num = rem+num*10;
            }
        }
        num = reverse(num);
        ans = num*sum;
        return ans;
    }
};