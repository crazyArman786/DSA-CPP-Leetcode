// You are given an integer array nums. Two players are playing a game with this array: player 1 and player 2.

// Player 1 and player 2 take turns, with player 1 starting first. Both players start the game with a score of
// 0. At each turn, the player takes one of the numbers from either end of the array (i.e., nums[0] or 
// nums[nums.length - 1]) which reduces the size of the array by 1. The player adds the chosen number to 
// their score. The game ends when there are no more elements in the array.

// Return true if Player 1 can win the game. If the scores of both players are equal, then player 1 is still 
// the winner, and you should also return true. You may assume that both players are playing optimally.


class Solution {
public:
    int solve(vector<int>& nums, int i, int j, vector<vector<int>>& dp){
        if(i==j)
        return nums[i];
        if(dp[i][j] != INT_MIN)
        return dp[i][j];

        int takeleft = nums[i] - solve(nums, i+1,j, dp);
        int takeright = nums[j] - solve(nums, i,j-1, dp);

        return dp[i][j] = max(takeleft, takeright);
    }
    bool predictTheWinner(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n, vector<int>(n, INT_MIN));
        return solve(nums,0, n-1, dp)>=0;
    }
};