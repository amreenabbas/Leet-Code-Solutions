//https://leetcode.com/problems/find-peak-element/
//created by js0805
class Solution {
public:
    void fastIO()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        while(s<e)
        {
            int mid = (s+e)/2;
            if(nums[mid]>nums[mid+1])
            {
                e = mid;
                cout<<e;
            }
            else {
                s = mid+1;
                cout<<s;
            }
        }
        return e;
    }
};
