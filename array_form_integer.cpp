class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>result;
        long long a=k;
        for(int i=num.size()-1;i>=0;i--){
            a+=num[i];
            result.insert(result.begin(),a%10);
            a/=10;
        }
        while(a>0){
            result.insert(result.begin(),a%10);
            a/=10;
        }
        return result;
    }
};