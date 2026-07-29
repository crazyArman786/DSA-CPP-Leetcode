// A pangram is a sentence where every letter of the English alphabet appears at least once.

// Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, 
// or false otherwise.


class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.size();
         if(n<26){
            return false;
         }
        vector<bool> arr(26, 0);

        for(int i=0; i<n; i++){
            int index = sentence[i]-'a';
            arr[index] =1;

        }
        for(int j=0; j<26; j++){
            if(arr[j]==0){
                return 0;
            }
        }
        return 1;
    }
};