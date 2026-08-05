class Solution {
public:
    int countValidPrefixes(string s) {
        int zeroCount = 0, oneCount = 0, ans = 0;
        for(char c : s){
            if(c == '0')
                zeroCount++;
            else
                oneCount++;
        int diff = abs(zeroCount - oneCount);
        if(diff <= 1) ans ++;
        }
        return ans;
    }
};