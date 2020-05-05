//https://leetcode.com/problems/intersection-of-two-arrays-ii/
//created by js0805
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        {
            mp[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            
            if(mp.find(nums2[i])!=mp.end())
            {
                if(mp[nums2[i]]>0)
                {
                    ans.push_back(nums2[i]);
                    mp[nums2[i]]--;
                }
            }
        }
        return ans;
            
            
        
    }
};
//created by js0805(copied)
sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    a.erase(set_intersection(a.begin(), a.end(), b.begin(), b.end(), a.begin()), a.end());
    return a;
