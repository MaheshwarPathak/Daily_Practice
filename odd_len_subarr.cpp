class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans=0,n=arr.size();
        for(int i=0;i<n;i++){
            int total=(i+1)*(n-i);
            int oddCount=(total+1)/2;
            ans+=arr[i]*oddCount;
        }
        return ans;
    }
};