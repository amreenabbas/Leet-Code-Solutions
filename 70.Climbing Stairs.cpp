Question Link : https://leetcode.com/problems/climbing-stairs/

//created by js0805

class Solution {
public:
        
    int climbStairs(int N) {
        long long int arr[N+1];
        arr[0] = 1;
        arr[1] = 1;
       
        for(int i =2;i<N+1;i++)
        {
            arr[i] = arr[i-1] + arr[i-2] ;
        }
        return arr[N];
    }
};
