#define MOD 1000000007

class Solution {
public:
    int countGoodArrays(int n, int m, int k) {
        if (k >= n) return 0;

        auto power = [](long long x, int y) -> long long {
            long long result = 1;
            x = x % MOD;
            while (y > 0) {
                if (y & 1)
                    result = (result * x) % MOD;
                x = (x * x) % MOD;
                y = y >> 1;
            }
            return result;
        };

        auto mod_inverse = [&](int a) -> long long {
            return power(a, MOD - 2);
        };

        auto nCr = [&](int n, int r) -> long long {
            if (r > n) return 0;
            if (r == 0) return 1;

            long long num = 1, den = 1;
            for (int i = 0; i < r; ++i) {
                num = (num * (n - i)) % MOD;
                den = (den * (i + 1)) % MOD;
            }
            return (num * mod_inverse(den)) % MOD;
        };

        long long kpos = nCr(n - 1, k);
        long long rem = power(m - 1, n - k - 1);
        
        long long result = (kpos * m % MOD * rem % MOD) % MOD;

        return static_cast<int>(result);
    }
};