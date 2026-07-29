// Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.


class Solution {
public:
    int addDigits(int num) {
        while(num>9){
            int ans=0,rem;
            while(num!=0){
                rem = num%10;
                num /= 10;
                ans += rem;
            }
            num = ans;
        }
        return num;
    }
};