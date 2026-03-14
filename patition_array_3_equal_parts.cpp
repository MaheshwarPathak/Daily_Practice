class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        long long totalSum=0;
         for(int x : arr){
            totalSum+= x;
         }
         if(totalSum % 3 != 0)
         return false;
        long long target = totalSum / 3;
        int count = 0;
        long long currSum = 0;

        for(int i=0; i < arr.size() ;i++){
            currSum += arr[i];
            if(currSum == target){ 
            count++;
            currSum=0;
            }
        }
        return count >= 3;
    }
};