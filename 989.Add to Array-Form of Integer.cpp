Question Link : https://leetcode.com/problems/add-to-array-form-of-integer/

//created by js0805

class Solution {
public:
      vector<int> addToArrayForm(vector<int> A, int K) {
        for (int i = A.size() - 1; i >= 0 && K > 0; --i) {
            A[i] += K;
            K = A[i] / 10;
            A[i] %= 10;
        }
        while (K > 0) {
            A.insert(A.begin(), K % 10);
            K /= 10;
        }
        return A;
    }
};

//Alternate solution by Amreen

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i,n=num.size(),c=0;
        vector<int>ans;
        i=n-1;
        while(i>=0 || k>0)
        {
            int s1=i>=0?num[i]:0;
            int s2=k>0?k%10:0;
            int sum=s1+c+s2;
            c = sum/10;
            ans.push_back(sum%10);
            i--;
            k/=10;
        }
        if(c>0)
            ans.push_back(c);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
