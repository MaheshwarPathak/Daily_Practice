class Solution {
public:
    int minChanges(int n, int k){
        if((n & k) != k) 
        return -1;

        int ans = n ^ k;
        int cnt = 0;
        while(ans > 0){
            cnt += ans & 1;
            ans = ans >> 1;
        }
        return cnt;
    }
};