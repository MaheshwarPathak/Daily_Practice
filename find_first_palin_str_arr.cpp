class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto word:words){
            int n=word.size();
            int flag=1;
            for(int i=0;i<n;i++){
                if(word[i]!=word[n-i-1]){
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                return word;
            }

        }
        return "";
    }
};