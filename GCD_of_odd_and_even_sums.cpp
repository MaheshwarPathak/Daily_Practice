class Solution {
public:
int gcd(int a, int b) {
    if (b == 0)
        return a;  
    return gcd(b, a % b);   
}
    int gcdOfOddEvenSums(int n) {
        int sumOdd=0,sumEven=0;
        while(n!=0){
           
            sumOdd+=1;
            sumEven+=2;
            n--;
        }
        return gcd(sumOdd,sumEven);
    }
};