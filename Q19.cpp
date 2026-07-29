// The Hamming distance between two integers is the number of positions at which the corresponding bits are 
// different.

// Given two integers x and y, return the Hamming distance between them.

class Solution{
public:    
    int hammingDistance(int x, int y){
        vector<int>arr(100,0);
        vector<int>mam(100,0);
        int nua = x, num = y;
        int i=0, ans=0;
        while(nua!=0 || num!=0){
            arr[i] += nua%2;
            mam[i] += num%2;
            num /= 2;
            nua /=2;
            if(arr[i]!=mam[i] && mam[i]!=arr[i]){
                ans += 1;
            }
            i++;
        }
        return ans;
    }
};