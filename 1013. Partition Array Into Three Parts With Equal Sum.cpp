Question Link : https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum/

//Solution by Amreen

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0;
        for(int n:arr)
            sum+=n;
        if(sum%3)
            return false;
        int i,n=arr.size(),csum=0,rsum=sum/3,f=0;
        for(i=0;i<n;i++)
        {
            csum+=arr[i];
            if(csum==rsum)
            {
                f++;
                csum=0;
            }
        }
        if(f>2)
            return true;
        return false;
    }
};
