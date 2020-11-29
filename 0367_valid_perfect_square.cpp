class Solution {
public:
    bool isPerfectSquare(int n) {
        long long l = 0, r = n;
        while (l < r) {
            long long mid = (l + r + 1) / 2;
            if (mid * mid == n * 1LL) return true;
            if (mid * mid < n * 1LL) l = mid;
            else r = mid - 1;
        }
        return false;
    }
};
