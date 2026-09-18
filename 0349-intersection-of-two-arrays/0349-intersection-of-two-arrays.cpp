class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int n = nums1.size(), m = nums2.size();
        vector<int>ans;
        int l = 0, r = 0;

        while(l < n && r < m){
            if(nums1[l] < nums2[r])
            l++;
            else if(nums1[l] > nums2[r])
            r++;
            else{ 
                if(ans.empty() || ans.back() != nums1[l])
                ans.push_back(nums1[l]);
            l++;
            r++;
            }
        }
        return ans;
    }
};