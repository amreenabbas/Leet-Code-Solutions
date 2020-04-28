/*

Given a m * n matrix mat of ones (representing soldiers) and zeros (representing civilians), return the indexes of the k weakest rows in the matrix ordered from the weakest to the strongest.

A row i is weaker than row j, if the number of soldiers in row i is less than the number of soldiers in row j, or they have the same number of soldiers but i is less than j. Soldiers are always stand in the frontier of a row, that is, always ones may appear first and then zeros.

 

Example 1:

Input: mat = 
[[1,1,0,0,0],
 [1,1,1,1,0],
 [1,0,0,0,0],
 [1,1,0,0,0],
 [1,1,1,1,1]], 
k = 3
Output: [2,0,3]
Explanation: 
The number of soldiers for each row is: 
row 0 -> 2 
row 1 -> 4 
row 2 -> 1 
row 3 -> 2 
row 4 -> 5 
Rows ordered from the weakest to the strongest are [2,0,3,1,4]
Example 2:

Input: mat = 
[[1,0,0,0],
 [1,1,1,1],
 [1,0,0,0],
 [1,0,0,0]], 
k = 2
Output: [0,2]
Explanation: 
The number of soldiers for each row is: 
row 0 -> 1 
row 1 -> 4 
row 2 -> 1 
row 3 -> 1 
Rows ordered from the weakest to the strongest are [0,2,3,1]
 

Constraints:

m == mat.length
n == mat[i].length
2 <= n, m <= 100
1 <= k <= m
matrix[i][j] is either 0 or 1.



*/
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
