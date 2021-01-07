Question Link : https://leetcode.com/problems/build-an-array-with-stack-operations/

//created by js0805

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int j =0;
        vector<string>ans;
        for(int i =1;i<=n && j<target.size();i++)
        {
            //cout << check[i] <<"\n";
            if(i==target[j])
            {
                ans.push_back("Push");
                j++;
            }
            else
            {
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};
