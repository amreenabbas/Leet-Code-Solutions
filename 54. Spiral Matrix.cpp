Question Link : https://leetcode.com/problems/spiral-matrix/

//Solution by Amreen

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int i,fr = 0,fc = 0, lr = matrix.size(),lc = matrix[0].size();
        vector<int>ans;
        if(lr == 0)
            return ans;
        lr--;
        lc--;
        while(fr<=lr && fc<=lc)
        {
            for(i=fc;i<=lc;i++)
                ans.push_back(matrix[fr][i]);
            
            for(i=fr+1;i<=lr;i++)
                ans.push_back(matrix[i][lc]);
            
            if(fr<lr && fc<lc){
            for(i=lc-1;i>fc;i--)
                ans.push_back(matrix[lr][i]);
            
            for(i=lr;i>fr;i--)
                ans.push_back(matrix[i][fc]);
            }
            lr--;
            fc++;
            fr++;
            lc--;
        }
        return ans;
    }
};
