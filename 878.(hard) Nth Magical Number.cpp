//https://leetcode.com/problems/nth-magical-number/
//created by js0805
class Solution {
public:
    int nthMagicalNumber(int N, int A, int B) {
        long lcm = (A * B)/__gcd(A,B),l = 2,r = 1e14, mod = 1e9 + 7;
        while(l<r){
            long mid =  (l+r)/2;
            if(mid/A + mid/B - mid/lcm <N)
                l = mid +1;
            else r = mid;
            
            
        }
        return l%mod;
    }
};
