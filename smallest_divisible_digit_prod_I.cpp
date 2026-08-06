class Solution {
    int digitProduct(int n){
        int prod = 1;
        while(n > 0){
            int digit = n % 10;
            prod = prod * digit;
            n = n / 10;
        }
        return prod;
    }
public:
    int smallestNumber(int n, int t) {
        for(int i = n; i <= 100; i++){
            if(digitProduct(i) % t == 0){
                return i;
            }
        }
        return -1;
    }
};