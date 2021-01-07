Question Link : https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/

// created by js0805

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>a;
        if(n==1)
            a.push_back(0);
         else if(n%2==0)
        {
            for(int i =0;i<n/2;i++) 
            {
                int t = -n/2+i;
                a.push_back(t);
                
            }
            for(int i =n/2;i<n;i++)
            {
                int t = 1+i-n/2;
                a.push_back(t);
                
            }
        }
        else
        {
            int t =-n/2;
            
            for(int i =0;i<n/2;i++)
            {   
                a.push_back(t);
                cout <<t<<" ";
             t++;
            }
            a.push_back(0);
            t=1;
            for(int i = n/2+1;i<n;i++)
            {
                
                a.push_back(t);
                t++;
            }
            
        }
        return a;
        
    }
};
