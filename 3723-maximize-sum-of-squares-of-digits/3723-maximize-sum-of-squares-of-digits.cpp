class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum > num * 9) return "";
        string ans = "";
        for(int i = 0; i < num; i++){
            int digit = min(sum, 9);
            ans += to_string(digit);
            sum -= digit;
        }
        return ans;
    }
};