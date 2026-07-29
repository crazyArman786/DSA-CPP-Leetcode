// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. 
// The returned integer should be non-negative as well.

// You must not use any built-in exponent function or operator.

// For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.


class Solution {
public:
    int mySqrt(int x) {
        int start=0, end=x, ans;
        long int mid;
        while(start<=end){
            mid= (start+end)/2;
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid< x){
                ans = mid;
                start = mid+1;
            }
            else
            end = mid-1;
        }
        return ans;
    }
};