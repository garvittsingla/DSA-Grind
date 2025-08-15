class Solution {
public:
    bool isPowerOfFour(int n) {
        int i = 1;
        while (i <= n) {
            if (i == n) return true;
            if (i > INT_MAX / 4) break;
            i *= 4;
        }
        return false;
    }
};