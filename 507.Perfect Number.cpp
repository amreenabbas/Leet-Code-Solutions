Question Link : https://leetcode.com/problems/perfect-number/

//created by js0805

class Solution {
public:
    bool checkPerfectNumber(int num) {
      if (num <= 0) {
            return false;
        }
        int sum = 0;
        for (int i = 1; i * i <= num; i++) {
            if (num % i == 0) {
                sum += i;
                if (i * i != num) {
                    sum += num / i;
                }
                cout << sum << " ";

            }
        }
        return sum - num == num;
    }
};
