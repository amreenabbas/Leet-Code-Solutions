Question Link : https://leetcode.com/problems/intersection-of-two-arrays/

//created by js0805

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s(nums1.begin(),nums1.end());
        vector<int>ans;
       
        
        for(int i =0;i<nums2.size();i++)
        {
            auto t = nums2[i];
            if(s.find(t)!=s.end())
            {
                ans.push_back(t);
                s.erase(t);
                
            }
        }
        
        return ans;
    }
};
