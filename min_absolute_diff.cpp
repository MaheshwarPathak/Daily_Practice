class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int minimum=INT_MAX;
        for(int i=0;i<arr.size()-1;i++){
            minimum=min(minimum,arr[i+1]-arr[i]);
        }
        vector<vector<int>>ans;
        for(int j=0;j<arr.size()-1;j++){
            if(arr[j+1]-arr[j]==minimum){
                ans.push_back({arr[j],arr[j+1]});
            }
        }
        return ans;
    }
};