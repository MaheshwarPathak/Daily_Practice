  vector<int> ans;
        unordered_map<int, int> freq;

        for (int x : nums) {
            if (freq[x] < k) {
                ans.push_back(x);
                freq[x]++;
            }
        }

        return ans;