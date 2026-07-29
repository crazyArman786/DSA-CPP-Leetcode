// You are given an integer n. Your task is to compute the GCD (greatest common divisor) of two 
// values:

// sumOdd: the sum of the smallest n positive odd numbers.

// sumEven: the sum of the smallest n positive even numbers.

// Return the GCD of sumOdd and sumEven.

class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd=0, sumEven=0;
        for(int i=1; i<=n; i++){
            sumOdd+= 2*n-1;
            sumEven+= 2*n;
        }
        if(sumEven==0){
            return sumOdd;
        }
        return gcd(sumEven, sumOdd%sumEven);
    }
};