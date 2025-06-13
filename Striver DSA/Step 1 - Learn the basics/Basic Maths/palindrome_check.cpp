class Solution {
public:
    int reverse(int x) {
        int revN = 0;

        while (x != 0) {
            int div = x % 10;

            // Overflow check
            if (revN > INT_MAX / 10 || (revN == INT_MAX / 10 && div > 7)) return 0;
            if (revN < INT_MIN / 10 || (revN == INT_MIN / 10 && div < -8)) return 0;

            revN = revN * 10 + div;
            x = x / 10;
        }

        return revN;
    }

    bool isPalindrome(int x) {
        if (x < 0) return false; // negative palidrome nhi hoga !!

        int rNum = reverse(x);
        return x == rNum;
    }
};
