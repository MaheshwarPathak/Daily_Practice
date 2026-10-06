class Solution {
public:
    int minAddToMakeValid(string s) {
        int depth = 0, ans = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                depth++;
            }else{
                if(depth > 0){
                    depth--;
                }else{
                    ans++;
                }
            }
        }
        return ans + depth;
    }
};