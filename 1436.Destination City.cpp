Question Link : https://leetcode.com/problems/destination-city/

//Created by Amreen

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map <string,int> left;
        map <string,int>right;
        for(int i = 0;i < paths.size(); i++)
        {
            left.insert(pair<string, int>(paths[i][0],1));
            right.insert(pair<string, int>(paths[i][1],1));
        }
        map<string, int>::iterator itr; 
        for ( itr = right.begin(); itr != right.end(); ++itr)
        {
            auto f = left.find(itr->first);
            if (f == left.end())
            return itr->first;
        }
         return itr->first  ; 
    }
};
