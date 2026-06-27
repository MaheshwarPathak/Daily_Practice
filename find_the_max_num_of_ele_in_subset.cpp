class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long, int> freq;

        for (int x : nums)
            freq[x]++;

        int ans = 1;

        if (freq.count(1))
            ans = (freq[1] & 1) ? freq[1] : freq[1] - 1;

        for (auto &[num, cnt] : freq) {
            if (num == 1)
                continue;

            long long cur = num;
            int len = 0;

            while (true) {
                auto it = freq.find(cur);
                if (it == freq.end() || it->second < 2)
                    break;

                len += 2;

                if (cur > 1000000000LL)
                    break;

                cur *= cur;
            }

            if (freq.find(cur) != freq.end())
                len++;
            else if (len > 0)
                len--;

            ans = max(ans, len);
        }

        return ans;
    }
};