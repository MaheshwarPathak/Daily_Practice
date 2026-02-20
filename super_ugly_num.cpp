class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        vector<long long>dp(n);
        dp[0]=1;
        int k=primes.size();
        vector<int>pointers(k,0);
        vector<long long>next_multiple(primes.begin(),primes.end());
        for(int i=1;i<n;i++){
            long long next_ugly=*min_element(next_multiple.begin(),next_multiple.end());
            dp[i]=next_ugly;
            for (int j = 0; j < k; ++j) {
                if (next_ugly == next_multiple[j]) {
                    pointers[j]++;
                    next_multiple[j] = dp[pointers[j]] * primes[j];
                }
            }
        }
        return dp[n - 1];
    }
};