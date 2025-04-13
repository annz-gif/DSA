class Solution {
public:
    long long helper(long long base, long long expo, long long mod) {
        long long ans = 1;
        while (expo > 0) {
            if (expo % 2 == 0) {
                base = (base * base) % mod;
                expo = expo / 2;
            } else {
                ans = (ans * base) % mod;
                expo -= 1;
            }
        }
        return ans;
    }

    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2;
        long long odd = n / 2;
        long long mod = 1e9 + 7;
        return (int)((helper(5, even, mod) * helper(4, odd, mod)) % mod);
    }
};
