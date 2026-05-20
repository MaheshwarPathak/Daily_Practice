class Solution {
public:
    bool isPrime(int n){
        if(n<=1) return 0;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;
        }
        return true;
    }
    long long splitArray(vector<int>& nums) {
        long long primeSum=0,sum=0;
        for(int i=0;i<nums.size();i++){
            if(isPrime(i)){
                primeSum+=nums[i];
            }else{
                sum+=nums[i];
            }
        }
        return abs(primeSum-sum);
    }
};