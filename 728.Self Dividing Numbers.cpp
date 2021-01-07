Question Link : https://leetcode.com/problems/self-dividing-numbers/

//created by js0805

class Solution {
public:

    vector<int> selfDividingNumbers(int left, int right) {
    vector<int> a;
        vector<int>c;
        for(int i =left;i<=right;i++)
        {int t = i;
         int x =0;
        while(t>0)
        {
           int j = t%10;
            c.push_back(j);
            t = t/10;
            
        }
         for(int j=0;j<c.size();j++)
         {
          //   cout << c[j];
             if( c[j]!=0 && i%c[j]==0 )
                 x++;
         }
        // cout <<endl;
         if(x == c.size())
             a.push_back(i);
         c.clear();
        }
        return a;
    }
};
