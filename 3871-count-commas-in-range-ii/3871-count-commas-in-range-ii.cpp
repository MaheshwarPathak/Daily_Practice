class Solution {
public:
    long long countCommas(long long n) {
        long long k = 999;
        long long ans = 0;
        while(k <= n){
            ans += max(0LL, n - k);
            k = k * 1000 + 999;
        }
        return ans;
    }
};