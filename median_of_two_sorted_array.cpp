class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int x:nums2){
            nums1.push_back(x);
        }
        sort(nums1.begin(),nums1.end());
        int n=nums1.size();
        if(n%2==1){
            return nums1[n/2];
        }else{
            return (float)(nums1[n/2]+nums1[n/2-1])/2;
        }
    }
};