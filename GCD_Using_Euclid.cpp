class Solution {
public:
    int solve(int a, int b) {
        // WRITE YOUR CODE HERE
        if(b == 0) return a;
        return solve(b, a % b);
    }
};