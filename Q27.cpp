// Given a string s which consists of lowercase or uppercase letters, return the length of the longest 
// palindrome that can be built with those letters.

// Letters are case sensitive, for example, "Aa" is not considered a palindrome.

class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> lower(26,0), upper(26,0);
        int count=0,odd=0;
        for(int i =0; i<s.size(); i++){
            if(s[i]>='a'){
                lower[s[i]-'a']++;
            }
            else{
                upper[s[i]-'A']++;
            }
        }
        for(int j=0; j<26; j++){
            if(lower[j]%2==0){
                count += lower[j];
            }
            else{
                count += lower[j]-1;
                odd=1;
            }
            if(upper[j]%2==0){
                count+= upper[j];
            }
            else{
                count += upper[j]-1;
                odd=1;
            }
        }
        return count+odd;
    }
};