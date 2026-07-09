class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> freq(10, 0);

        for (int d : digits)
            freq[d]++;

        vector<int> ans;

        for (int num = 100; num <= 998; num += 2) {
            int a = num / 100;
            int b = (num / 10) % 10;
            int c = num % 10;

            vector<int> need(10, 0);

            need[a]++;
            need[b]++;
            need[c]++;

            bool possible = true;

            for (int i = 0; i < 10; i++) {
                if (need[i] > freq[i]) {
                    possible = false;
                    break;
                }
            }

            if (possible)
                ans.push_back(num);
        }

        return ans;
    }
};