class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        long long sum = 0;
        vector<int>gains;

        for(int num : nums){
            sum += num;

            string digit = to_string(num);
            sort(digit.begin(), digit.end(), greater<char>());

            int maxNum = stoi(digit);
            gains.push_back(maxNum - num);
        }
        auto bremovilta = nums;
        sort(gains.begin(), gains.end(), greater<int>());
        
        for(int i = 0; i < k; i++){
            sum += gains[i];
        }
        return sum;
    }
};