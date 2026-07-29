// You are given a positive integer n.

// Return the maximum product of any two digits in n.

// Note: You may use the same digit twice if it appears more than once in n.


class Solution {
public:
    int maxProduct(int n) {
        int product =0, rem, num = 0;
        while(n>0){
            rem = n%10;
            n = n/10;
            product = max(product,num*rem);
            num = max(rem, num);
        }
        return product;
    }
};