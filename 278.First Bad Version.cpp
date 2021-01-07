Question Link : https://leetcode.com/problems/first-bad-version/

//created by js0805

class Solution {
public:
    int firstBadVersion(int n) {
         unsigned long int low = 1, high = n;
        unsigned long int mid;
        while(low <= high){
            mid = (low + high) / 2;
            if(isBadVersion(mid)){
                high=mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return low; 
    }
};
