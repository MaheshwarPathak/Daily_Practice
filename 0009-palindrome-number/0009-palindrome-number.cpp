class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long long original = x;
        long long ans;
        while(x != 0){
            int digit = x % 10;
            ans = ans * 10 + digit;
            x /= 10;
        }
        return (original == ans);
    }
};