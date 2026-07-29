// Given an integer x, return true if x is a palindrome, and false otherwise.

class Solution {
public:
    bool isPalindrome(int x) {
        long int ans=0, num=x, rem;
        while(num>0){
        rem = num%10;
        ans = (ans + rem)*10;
        num /= 10;
        }
        if(ans/10==x) return 1;
        else return 0;
    }
};