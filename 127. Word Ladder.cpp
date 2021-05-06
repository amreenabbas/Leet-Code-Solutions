Question Link : https://leetcode.com/problems/word-ladder/

//Solution by Amreen

class Solution {
public:
   
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string,int>> q1;
        q1.push({beginWord,1});
        int n=wordList.size(),i,j;
        vector<bool>vis(n,false);
        unordered_map<string,vector<int>> dict;
        for(i=0;i<n;i++)
        {
            string word = wordList[i];
            int l = word.length();
            for(j=0;j<l;j++)
            {
                string s = word.substr(0,j)+"*"+word.substr(j+1);
                dict[s].push_back(i);
            }   
        }
        
        while(!q1.empty())
        {
            pair<string,int> p = q1.front();
            string t = p.first;
            q1.pop();
            int lvl = p.second;
            int l = t.length();
            for(i=0;i<l;i++)
            {
                string s = t.substr(0,i)+"*"+t.substr(i+1);
                vector<int> arr = dict[s];
                for(int ind:arr)
                {
                    if(wordList[ind] == endWord)
                        return lvl+1;
                    if(!vis[ind])
                    {
                        q1.push({wordList[ind],lvl+1});
                        vis[ind] = true;
                    }    
                }
            }
        }  
            
        return 0;
    }
};

//Alternate solution by Amreen

class Solution {
public:
   
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string,int>> q1,q2;
        q1.push({beginWord,1});
        q2.push({endWord,1});
        int n=wordList.size(),i,j;
        vector<int>vis(n,0);
        vector<int>vis2(n,0);
        unordered_map<string,vector<int>> dict;
        bool f = false;
        for(i=0;i<n;i++)
        {
            string word = wordList[i];
            int l = word.length();
            for(j=0;j<l;j++)
            {
                string s = word.substr(0,j)+"*"+word.substr(j+1);
                dict[s].push_back(i);
            }   
            if(word == endWord)
                f=true;
        }
        if(!f)
            return 0;
        while(!q1.empty() && !q2.empty())
        {
            pair<string,int> p = q1.front();
            string t = p.first;
            q1.pop();
            int lvl = p.second;
            int l = t.length();
            for(i=0;i<l;i++)
            {
                string s = t.substr(0,i)+"*"+t.substr(i+1);
                vector<int> arr = dict[s];
                for(int ind:arr)
                {
                    if(wordList[ind] == endWord)
                        return lvl+1;
                    if(vis2[ind]>0)
                        return lvl+vis2[ind];
                    if(!vis[ind])
                    {
                        q1.push({wordList[ind],lvl+1});
                        vis[ind] = lvl+1;
                    }    
                }
            }
            
            pair<string,int> p2 = q2.front();
            string t2 = p2.first;
            q2.pop();
            int lvl2 = p2.second;
            int l2 = t2.length();
            for(i=0;i<l2;i++)
            {
                string s = t2.substr(0,i)+"*"+t2.substr(i+1);
                vector<int> arr = dict[s];
                for(int ind:arr)
                {
                    if(wordList[ind] == beginWord)
                        return lvl2+1;
                    if(vis[ind]>0)
                        return lvl2+vis[ind];
                    if(!vis2[ind])
                    {
                        q2.push({wordList[ind],lvl2+1});
                        vis2[ind] = lvl2+1;
                    }    
                }
            }
            
        }  
            
        return 0;
    }
};
