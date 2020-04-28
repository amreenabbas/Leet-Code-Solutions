
/*
Given an integer n, return any array containing n unique integers such that they add up to 0.

 

Example 1:

Input: n = 5
Output: [-7,-1,1,3,4]
Explanation: These arrays also are accepted [-5,-1,1,2,3] , [-3,-1,2,-2,4].
Example 2:

Input: n = 3
Output: [-1,0,1]
Example 3:

Input: n = 1
Output: [0]
 

Constraints:

1 <= n <= 1000
*/

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
