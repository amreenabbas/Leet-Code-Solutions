Question Link : https://leetcode.com/problems/minimum-adjacent-swaps-to-reach-the-kth-smallest-number/

//Solution by Amreen

class Solution {
public:
    void reverse(string &num, int s, int e)
    {
        int i=s,j=e;
        while(i<j)
        {
            char c = num[i];
            num[i] = num[j];
            num[j] = c;
            i++;
            j--;
        }
        
    }
    void getnextper(string &num)
    {
         int i,n=num.length(),j;
        for(i=n-1;i>=0;i--)
        {
            if(num[i-1]<num[i])
                break;
        }
        int pos;
        char mine;
         for(j=i;j<n;j++)
         {
             if(num[j]>num[i-1])
             {
                 mine = min(mine,num[j]);
                 pos = j;
             }
         }
        char c = num[pos];
        num[pos] = num[i-1];
        num[i-1] = c;
        reverse(num,i,n-1);
  
    }
    int getMinSwaps(string num, int k) {
        string per=num;
        for(int i =0;i<k;i++)
            getnextper(per);
        int i=0,j=0,ans=0,n=num.length();
        while(i<n)
        {
            j=i;
            while(num[j]!=per[i])
                j++;
            
            while(i<j)
            {
                char c = num[j];
                num[j] = num[j-1];
                num[j-1] = c;
                j--;
                ans++;
            }
            i++;
        }
        return ans;
    }    
    
};
