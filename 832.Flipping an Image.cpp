Question Link : https://leetcode.com/problems/flipping-an-image/

//created by js0805

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int a = A.size();
        int b = A[0].size();
        vector<vector<int>>ans(a,vector<int>(b));
        
        for(int i =0;i<a;i++)
        {
            
           for(int j =0;j<b;j++)
            {
                int t = A[i][b-1-j];
                
                
                if(t==1)
                    t=0;
                else
                    t=1;
               
                    ans[i][j]=t;
            }
        }
        
        return ans;
    }
};
