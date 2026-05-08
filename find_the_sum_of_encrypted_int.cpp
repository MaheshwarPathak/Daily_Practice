class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int ans=0;
        for(auto x:nums){
            char maxCharacter='0';
            string s=to_string(x);
            for(auto y:s){
                maxCharacter=max(maxCharacter,y);
            }
            int newNumber=stoi(string(s.size(),maxCharacter));
            ans+=newNumber;
        }
        return ans;
    }
};