Question Link : https://leetcode.com/problems/three-consecutive-odds/

//Solution by Amreen

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int i,n=arr.size();
        if(n<3)
            return false;
        for(i=2;i<n;i++)
        {
            if((arr[i]&1)&&(arr[i-1]&1)&&(arr[i-2]&1))
                return true;
        }
        return false;
    }
};
