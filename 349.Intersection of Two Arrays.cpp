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

//ALternate solution by js0805
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int arr[1001] = {0};
        for(int i=0;i<nums1.size();i++){
            arr[nums1[i]] = 1;
        }
        for(int i=0;i<nums2.size();i++){
            if(arr[nums2[i]]==1){
                arr[nums2[i]] = 2;
            }
        }
        vector<int> ans;
        for(int i=0;i<1001;i++){
            if(arr[i]==2){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
