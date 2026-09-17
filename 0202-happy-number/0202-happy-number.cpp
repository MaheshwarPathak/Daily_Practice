class Solution {
public:
    int solve(int num){
        int sum = 0;
        while(num > 0){
            int digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int>set;
        while(n != 1 && set.count(n) != 1){
            set.insert(n);
            n = solve(n);
        }
        return n == 1;
    }
};