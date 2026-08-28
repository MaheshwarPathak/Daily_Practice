class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char ch : s){
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }
            else{
                if(st.empty()) return false;
                char c = st.top();
                st.pop();
                if((ch == ')' && c == '(' ) || 
                (ch == '}' && c == '{') || 
                (ch == ']' && c == '[')){
                    return true;
                }else
                return false;
            }
        }
        return st.empty();
    }
};