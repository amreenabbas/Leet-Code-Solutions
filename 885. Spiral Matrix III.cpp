Question Link : https://leetcode.com/problems/spiral-matrix-iii/

//Solution by Amreen

class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int R, int C, int r0, int c0) {
        vector<vector<int>>ans;
        int i,j,k,c=1;
        int dr[4] = {0,1,0,-1};
        int dc[4] = {1,0,-1,0};
        ans.push_back({r0,c0});
        if(R*C == 1)
            return ans;
        for(i=1;i<2*(R+C);i+=2)
        {
            for(j=0;j<4;j++)
            {
                int steps = i+(j/2);
                for(k=0;k<steps;k++)
                {
                    r0+=dr[j];
                    c0+=dc[j];
                    if(r0>=0 && r0<R && c0>=0 && c0<C)
                    {
                        c++;
                        ans.push_back({r0,c0});
                    }
                    if(c == R*C)
                        return ans;
                }
            }
        }
        return ans;
    }
};
