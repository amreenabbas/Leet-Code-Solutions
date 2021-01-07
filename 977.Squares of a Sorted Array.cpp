Question Link : https://leetcode.com/problems/squares-of-a-sorted-array/

//created by js0805
//naive-solution

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        for(int i=0;i<A.size();i++)
        {
            A[i] = pow(A[i],2);
        }
        sort(A.begin(),A.end());
        return A;
    }
};

//better solution would be to use inline and outline

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int>ans(A.size());
        int r=A.size()-1,l=0;
        int n = A.size();
        for(int i=n-1;i>=0;i--)
        {
            if(abs(A[r])>abs(A[l]))
            {
                ans[i] = A[r] *A[r--];
            }
            else
            {
                ans[i] = A[l] * A[l++];
            }
        }
        return ans;
        
    }
};
