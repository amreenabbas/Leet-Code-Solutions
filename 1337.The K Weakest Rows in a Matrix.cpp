Question Link : https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/

//created by js0805

class Solution {
public:
    struct a{
        int data;
        int key;
    };
    static bool compare(a q,a v)
    {
        if(q.data==v.data)
            return q.key < v.key;
        else
        return q.data < v.data;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size(); 
        a ans[n];
        for(auto i =0;i<mat.size();i++)
        {
            int t =0;
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]==1)
                {
                    t++;
                }
            }
           
            ans[i].data = t;
            ans[i].key = i;
        }
        
       for(int i =0 ;i<n;i++)
       {
           cout << ans[i].data<< "->" << ans[i].key << endl;
       }
        sort(ans, ans+n,compare);
                vector<int>b;
        for(int i =0 ;i<k;i++)
       {
            int t = ans[i].key;
            b.push_back(t);
            cout << b[i];
       }

        return b;
    }
};
