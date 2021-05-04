Question Link : https://leetcode.com/problems/sliding-window-median/

//Solution by Amreen

#include<iterator>
using namespace std;
class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        multiset<int> s;
        int i,n=nums.size();
        vector<double> med;
        bool f = k&1;
        double m;
        int h = k/2;
        for(i=0;i<n;i++)
        {
            if(i<k-1)
            {
                s.insert(nums[i]);
            }    
            else
            {
                s.insert(nums[i]);
                if(i!=k-1)
                s.erase(s.find(nums[i-k]));
                if(f)
                {
                    set<int>::iterator ptr = s.begin();
                    advance(ptr,h);
                    m = *ptr;
                    
                }
                else
                {
                    set<int>::iterator ptr = s.begin();
                    advance(ptr,h-1);
                    long v1 = *ptr;
                    set<int>::iterator ptr2 = s.begin();
                    advance(ptr2,h);
                    long v2 = *ptr2;
                    m = (v1+v2)*(1.0)/2;
                    
                } 
                
                med.push_back(m);
                
            }
            
        }
        return med;
    }
    
};
