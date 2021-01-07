Question Link : https://leetcode.com/problems/unique-paths/

//created by js0805

int dp[101][101] = {0};
class Solution {
public:
    int uniquePaths(int m, int n) {
        if(m==1 or n==1){
            return 1;
        }
        if(dp[m][n]){
            return dp[m][n];
        }
        return dp[m][n] = uniquePaths(m,n-1) + uniquePaths(m-1,n);
        
    }
};
