Question Link : https://leetcode.com/problems/unique-number-of-occurrences/

//created by js0805
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int brr[2002] = {0};
        
   for(int i =0;i<arr.size();i++)
   {
           brr[arr[i]+1000]++;
   }
        set<int>s;
        for(int i =0;i<2002;i++)
        {
            if(s.find(brr[i])!=s.end()&& brr[i]!=0)
            {
                cout << brr[i];
                return false;
            }
           
            s.insert(brr[i]);
        }
        return true;
    }
};
