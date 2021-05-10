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


//Alternate solution by Amreen

class Solution {
public:
    int climbStairs(int n) {
        int i;
        if(n==1)
            return 1;
        int v2 = 1;
        int v1 = 2;
        int steps;
        for(i=3;i<=n;i++)
        {
            steps = v1+v2;
            v2 = v1;
            v1 = steps;
        }
        return v1;
    }
};
