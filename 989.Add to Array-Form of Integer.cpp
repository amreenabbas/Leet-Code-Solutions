Question Link : https://leetcode.com/problems/add-to-array-form-of-integer/

//created by js0805

class Solution {
public:
      vector<int> addToArrayForm(vector<int> A, int K) {
        for (int i = A.size() - 1; i >= 0 && K > 0; --i) {
            A[i] += K;
            K = A[i] / 10;
            A[i] %= 10;
        }
        while (K > 0) {
            A.insert(A.begin(), K % 10);
            K /= 10;
        }
        return A;
    }
};
