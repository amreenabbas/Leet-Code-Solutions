Question Link : https://leetcode.com/problems/longest-substring-without-repeating-characters/

//Solution by Amreen

class Solution {
public:
    int max(int a, int b)
    {
        return a>b?a:b;
    }
   
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n==0)
            return 0;
        int i,maxl=1;
        deque<char> dq;
        int count[256] = {0};
        for(i=0;i<n;i++)
        {
            int c = s[i];
            if(count[c] == 0)
                dq.push_back(s[i]);
            else
            {
                while(!dq.empty()&&dq.front()!=s[i])
                {
                    char p = dq.front();
                    dq.pop_front();
                    count[p]--;
                }    
                if(!dq.empty() && dq.front()==s[i])
                {
                    count[c]--;
                    dq.pop_front();
                }
                dq.push_back(s[i]);
            }
            count[c]++;
            maxl = max(maxl,dq.size());
        }
        return maxl;
    }   
};


//Alternate solution by Amreen

class Solution {
public:
    int max(int a, int b)
    {
        return a>b?a:b;
    }
   
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n==0)
            return 0;
        int i,j,maxl=0;
        unordered_map<char,int>count;     
        for(i=0,j=0;j<n;j++)
        {
            if(count.find(s[j])!=count.end())
                i = max(i,count[s[j]]+1);
            count[s[j]] = j;
            maxl = max(maxl,j-i+1);
        }
        return maxl;
    }   
};
