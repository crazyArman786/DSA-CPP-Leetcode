// We are playing the Guess Game. The game is as follows:

// I pick a number from 1 to n. You have to guess which number I picked (the number I picked stays the same 
// throughout the game).

// Every time you guess wrong, I will tell you whether the number I picked is higher or lower than your guess.

// You call a pre-defined API int guess(int num), which returns three possible results:

// -1: Your guess is higher than the number I picked (i.e. num > pick).
// 1: Your guess is lower than the number I picked (i.e. num < pick).
// 0: your guess is equal to the number I picked (i.e. num == pick).
// Return the number that I picked.

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long int start = 1, end = n;
        while(start<=end){
            long int mid = (start+end)/2;
            long int val = guess(mid);
            if(val == 0){
                return mid;
            }
            else if(val == -1){
                end = mid-1;
            }
            else if(val == 1){
                start = mid+1;
            }
        }
        return 0;
    }
};