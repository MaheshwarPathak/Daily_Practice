class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>temp=arr;
        sort(temp.begin(),temp.end());
        
        unordered_map<int,int>map;
        int rank = 1;
        for(int num : temp){
            if(map.find(num) == map.end()){ 
            map[num] = rank++;

            }
        }
        for(int i=0;i<arr.size();i++){
            arr[i] = map[arr[i]];
        }
        return arr;
    }
};