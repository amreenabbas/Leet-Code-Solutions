/*
A self-dividing number is a number that is divisible by every digit it contains.

For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.

Also, a self-dividing number is not allowed to contain the digit zero.

Given a lower and upper number bound, output a list of every possible self dividing number, including the bounds if possible.

Example 1:
Input: 
left = 1, right = 22
Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 15, 22]
Note:

The boundaries of each input argument are 1 <= left <= right <= 10000.
*/
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
