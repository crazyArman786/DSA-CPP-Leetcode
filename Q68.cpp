// You are given an array of characters letters that is sorted in non-decreasing order, and a 
// character target. There are at least two different characters in letters.

// Return the smallest character in letters that is lexicographically greater than target. If such 
// a character does not exist, return the first character in letters.


class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int start = 0, end=n-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(letters[mid]<=target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return letters[start % letters.size()];
    }
};