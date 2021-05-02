Question Link : https://leetcode.com/problems/group-anagrams/

//Solution by Amreen

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>ans;
        vector<vector<string>>res;
        int i,n=strs.size();
        string word;
        for(i=0;i<n;i++)
        {
            word = strs[i];
            sort(word.begin(),word.end());
            ans[word].push_back(strs[i]);
        }
        for(auto it:ans)
        {
            n = it.second.size();
            vector<string> v;
            for(int j=0;j<n;j++)
            {
                v.push_back(it.second[j]);
            }
            res.push_back(v);
        }
        return res;
    }
};

//Alternate solution by Amreen
class Solution {
public:
vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char,int>,vector<string>>ans;
        vector<vector<string>>res;
        int i,n=strs.size();
        string word;
        for(i=0;i<n;i++)
        {
            word = strs[i];
            int m = word.length();
            map<char,int> freq;
            for(int k = 0;k<m;k++)
            freq[word[k]]++;
            ans[freq].push_back(strs[i]);
        }
        for(auto it:ans)
        {
            n = it.second.size();
            vector<string> v;
            for(int j=0;j<n;j++)
            {
                v.push_back(it.second[j]);
            }
            res.push_back(v);
        }
        return res;
    }
};
