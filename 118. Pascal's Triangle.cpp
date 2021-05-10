Question Link : https://leetcode.com/problems/pascals-triangle/

//Solution by Amreen

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        if(numRows == 0)
            return ans;
        ans.push_back({1});
        if(numRows == 1)
            return ans;
        int i,j;
        //dp[i][j] = dp[i-1][j-1]+dp[i-1][j];
        for(i=1;i<numRows;i++)
        {
            vector<int>v;
            v.push_back(1);
            j=1;
            while(j<i)
            {
                v.push_back(ans[i-1][j-1]+ans[i-1][j]);
                j++;
            }
            v.push_back(1);
            ans.push_back(v);
        }
        return ans;
    }
};
