class Solution {
public:
    long long power(long long base, long long exp, long long mod){
        long long res = 1;
        base %= mod;
        while(exp > 0){
            if(exp % 2 == 1) res = (res * base) % mod;
            base = (base * base) % mod;

            exp /= 2;
        }
        return res;
    }
    int sumDecoded(vector<long long>& nums) {
        long long n = nums.size();
        long long total_sum = 0;
        long long mod = 1e9 + 7;
        for(int i = 0; i < n; i++){
            int width = nums[i] % 10;
            long long d = nums[i] / 10;
            
           string s = to_string(d);

           string s_x = s.substr(0, width);
           string s_y = s.substr(width);

            long long x = stoi(s_x);
            long long y = stoi(s_y);

            long long product = power(x, y, mod);
            total_sum =(total_sum + product) % mod;
        }
        return total_sum;
    }
};