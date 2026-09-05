class Solution {
public:
    const long long MOD = 1e9 + 7;

    long long countDigits(long long n) {
        long long count = 0;
        while(n > 0) {
            n /= 10;
            count++;
        }
        return count;
    }

    long long modpow(long long base, long long exp, long long mod) {
        base %= mod;
        long long result = 1;
        while(exp > 0) {
            if(exp & 1) result = (result * base) % mod;
            base = (base * base) % mod;
            exp >>= 1;
        }
        return result;
    }

    int sumDecoded(vector<long long>& nums) {
        long long totalSum = 0;
        for(long long i = 0; i < nums.size(); i++) {
            long long width = nums[i] % 10;
            long long d = nums[i] / 10;

            long long totalDigits = countDigits(d);
            long long yDigits = totalDigits - width;

            long long divisor = 1;
            for(long long k = 0; k < yDigits; k++) divisor *= 10;

            long long y = d % divisor;   // last yDigits digits
            long long x = d / divisor;    // remaining leading digits

            long long decoded = modpow(x, y, MOD);
            totalSum = (totalSum + decoded) % MOD;
        }
        return (int)totalSum;
    }
};