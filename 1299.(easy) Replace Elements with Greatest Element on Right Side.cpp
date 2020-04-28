/*

Given an array arr, replace every element in that array with the greatest element among the elements to its right, and replace the last element with -1.

After doing so, return the array.

 

Example 1:

Input: arr = [17,18,5,4,6,1]
Output: [18,6,6,6,1,-1]
 

Constraints:

1 <= arr.length <= 10^4
1 <= arr[i] <= 10^5
*/



//created by js0805

class Solution {
public:
     vector<int> replaceElements(vector<int>& A, int mx = -1) {
        for (int i = A.size() - 1; i >= 0; --i)
            mx = max(mx, exchange(A[i], mx));
        return A;
    }
};
