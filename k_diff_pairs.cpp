class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k<0) return 0;
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        int count=0;
        for(auto &p:freq){
            int num=p.first;
            if(k==0){
                if(p.second>1)
                    count++;
                }else{
                    if(freq.find(num+k)!=freq.end())
                    count++;
                }
            }
        return count;
    }
};