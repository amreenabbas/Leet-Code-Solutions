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

//Alternate solution by Amreen

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int c=0,i,n=heights.size();
        vector<int>sorted(heights.begin(),heights.end());
        sort(sorted.begin(),sorted.end());
        for(i=0;i<n;i++)
        {
            if(sorted[i]!=heights[i])
                c++;
        }
        return c;
    }
};
