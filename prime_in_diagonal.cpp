 class Solution {
public:


    int prime(int n){
        if(n==1)
        return 0;

    for (int p = 2; p * p <= n; p++) {
        if(n%p==0)
        return 0;
    }
    return 1;
  
    
}

    int diagonalPrime(vector<vector<int>>& nums) {
        int m=0,i,j,k,c=0;
        int n= nums.size();

        for(i=0;i<nums.size();i++){
            if(prime(nums[i][i]))
            m=max(nums[i][i],m);
            if(prime(nums[i][n-i-1]))
            m=max(nums[i][n-i-1],m);
        }
        return m;
        
    }
};