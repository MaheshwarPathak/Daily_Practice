class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        for(int start = 1; start<=9 ;start++){
            int num = start;

            for(int nextdigit = start + 1;nextdigit<=9 ; nextdigit++){
                num = num * 10 + nextdigit;

                if(num >= low && num <= high){
                    ans.push_back(num);
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};