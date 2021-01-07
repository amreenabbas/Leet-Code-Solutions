Question Link : https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/

//created by js0805
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
    int t =1;
        for(int i =0;i<arr.size()-1;i++)
        {
            if(arr[i]==arr[i+1])
                t++;
            else
                t =1;
            if(t > arr.size()/4)
                return arr[i];
        }
    return 1;
    
    }
};
