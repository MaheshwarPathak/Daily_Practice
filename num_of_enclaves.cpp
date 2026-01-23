class Solution {
public:
int n,m;
void dfs(int row,int col,vector<vector<int>>& grid){
    if(row<0 || col<0 || row>=n || col>=m || grid[row][col]==0)
    return ;
    grid[row][col]=0;

        dfs(row + 1, col, grid);
        dfs(row - 1, col, grid);
        dfs(row, col + 1, grid);
        dfs(row, col - 1, grid);
}
    int numEnclaves(vector<vector<int>>& grid) {
         n=grid.size();
         m=grid[0].size();
        for(int i=0;i<n;i++){
            dfs(i,0,grid);
            dfs(i,m-1,grid);
        }
        for(int j=0;j<m;j++){
            dfs(0,j,grid);
            dfs(n-1,j,grid);
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1)
                cnt++;
            }
        }
        return cnt;
    }
};