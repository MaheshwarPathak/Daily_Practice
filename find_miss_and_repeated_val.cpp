class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>count((n*n)+1,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                count[grid[i][j]]++;
            }
        }
        int repeated=-1,missing=-1;
        for(int num=1;num<=n*n;num++){
            if(count[num]==2){
                repeated=num;
            }else if(count[num]==0){
                missing=num;
            }
        }
        return {repeated,missing};
    }
};