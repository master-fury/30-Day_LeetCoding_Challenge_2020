class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
      const  int INF=1e9+5;
       int r=grid.size();
        int c=grid[0].size();
        vector<vector<int>> dp(r,vector<int>(c));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(i==0 && j==0){
                    dp[i][j]=grid[i][j];
                }
                else
                    dp[i][j]=grid[i][j]+min((i==0?INF:dp[i-1][j]),(j==0?INF:dp[i][j-1]));
                }
        }
        return dp[r-1][c-1];
    }
};