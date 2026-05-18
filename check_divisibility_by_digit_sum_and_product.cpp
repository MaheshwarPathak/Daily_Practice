class Solution {
public:
    bool checkDivisibility(int n) {
        int ori=n;
        int sum=0,mult=1;
        while(n>0){
          int rem=n%10;
            sum+=rem;
            mult*=rem;
            n= n/10;

        }
        if(ori%(mult+sum)==0)
        return true;
        return false;
    }
};