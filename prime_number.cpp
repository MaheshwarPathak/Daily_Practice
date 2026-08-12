class Solution {
public:
    bool solve(int n) {
        // WRITE YOUR CODE HERE
        for(int i = 2; i * i <= n; i++){
            if(n % i == 0){
                return false;
                break;
            }
        }
        return true;
    }
};