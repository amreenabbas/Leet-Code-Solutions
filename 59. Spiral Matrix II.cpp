Question Link : https://leetcode.com/problems/spiral-matrix-ii/

//Solution by Amreen

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int fr=0,fc=0,lr=n-1,lc=n-1,i,k=1;
        vector<vector<int>> ans(n,(vector<int>(n,0)));
        while(fr<=lr &&fc<=lc)
        {
            for(i=fc;i<=lc;i++)
                ans[fr][i] = k++;
            for(i=fr+1;i<=lr;i++)
                ans[i][lc] = k++;
            if(fc<lc && fr<lr)
            {
                for(i=lc-1;i>fc;i--)
                    ans[lr][i] = k++;
                for(i=lr;i>fr;i--)
                    ans[i][fc] = k++;
            }
            fr++;
            lr--;
            fc++;
            lc--;
        }
        return ans;
    }
};
