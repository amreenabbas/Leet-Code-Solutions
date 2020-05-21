//https://leetcode.com/problems/guess-number-higher-or-lower/
//created by js0805
//Use of the workspace criterion of the binary search function.
//     (1__2__3__4__5__6__7__8__9__10)
// Create mid which will point to (1+10)/2 = 5
//then 6>5
// do s = mid+1;
//then e = mid- 1 ;
 //and so on....!!!
 /** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long int s = 1;
        long long int e = n;
        long long int j;
        while(1)
        {
           long long int mid = (s+e)/2;
            j = guess(mid);
            if(j==0)
                return mid;
            else if(j==-1)
                e = mid-1;
            else
                s = mid+1;
     }
        
             return 0;
     }
};

