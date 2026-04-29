class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long con=0;
        int i=0,j=nums.size()-1;
        while(i<j){
            string a=to_string(nums[i]);
            string b=to_string(nums[j]);
            long long ans=stoi(a+b);
            con+=ans;
            i++;j--;
        }
        if(nums.size()%2!=0){
            con+=nums[nums.size()/2];
        }
        return con;
    }
};