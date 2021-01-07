Question Link : https://leetcode.com/problems/height-checker/

//created by js0805
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        int arr[n];
        for(int i =0;i<heights.size();i++)
        {
            arr[i] = heights[i];
        }
        sort(arr,arr+n);
        int ans=0;
        for(int i =0;i<n;i++)
        {
            if(arr[i]!=heights[i])
                ans++;
        }
        return ans;
    }
};
