class Solution {
public:
int gcd(int a, int b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}
    long long maxPairStrength(vector<int>& nums) {
        long long maxStrength = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                long long ans = gcd(nums[i], nums[j]);
                maxStrength = max(maxStrength, (1LL * nums[i] * nums[j]) / (1LL * ans * ans));
            }
        }
        return maxStrength;
    }
};