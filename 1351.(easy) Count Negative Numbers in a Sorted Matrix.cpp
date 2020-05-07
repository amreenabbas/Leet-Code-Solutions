/*

Given a m * n matrix grid which is sorted in non-increasing order both row-wise and column-wise. 

Return the number of negative numbers in grid.

 

Example 1:

Input: grid = [[4,3,2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]
Output: 8
Explanation: There are 8 negatives number in the matrix.
Example 2:

Input: grid = [[3,2],[1,0]]
Output: 0
Example 3:

Input: grid = [[1,-1],[-1,-1]]
Output: 3
Example 4:

Input: grid = [[-1]]
Output: 1
 

Constraints:

m == grid.length
n == grid[i].length
1 <= m, n <= 100
-100 <= grid[i][j] <= 100
*/
//created by js0805
//Brute force approach
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int sum=0;
            for(int i=grid.size()-1;i>=0;i--)
            {
                for(int j=grid[i].size()-1;j>=0;j--)
                {
                    if(grid[i][j]<0)
                    {
                        sum++;
                    }
                    else
                        break;
                }
            }
        return sum;
        
    }
};
//to be discussed
    // Binary Search: O(m lg(n)) or equivalently O(n lg(m)) - look for break point of each row / column
        for (const vector<int>& row: grid)
            ans += upper_bound(row.rbegin(), row.rend(), -1) - row.rbegin();
        return ans;
        
        // Search Break Points: O(m + n) - traverse from upper right to lower left
        int m(grid.size()), n(grid[0].size()), r(0), c(n - 1);
        while (r < m) {
            while (c >= 0 && grid[r][c] < 0) c--;
            ans += n - c - 1;
            r++;
        }
        return ans;
    }
};