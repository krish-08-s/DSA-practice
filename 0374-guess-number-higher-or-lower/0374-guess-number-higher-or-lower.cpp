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
        int low = 1 , high = n , mid , check;
        while( low <= high){
            mid = low + ( high - low ) / 2;
            check = guess(mid);
            if(check == 0)      // mid(guess)  = picked number
                return mid;
            else if(check < 0 ) // mid(guess) > picked number
                high = mid - 1;
            else                // mid(guess) < picked number
                low = mid + 1;
        }
        return -1;
    }
};