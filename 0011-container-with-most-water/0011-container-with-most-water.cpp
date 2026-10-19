class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n - 1;
        long long maxArea = 0;
        while(left < right){
            int h = min(height[left], height[right]);
            int l = right - left;
            long long area = h * l;
            maxArea = max(maxArea, area);

            if(height[left] < height[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxArea;
    }
};