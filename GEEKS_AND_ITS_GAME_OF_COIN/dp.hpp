class Solution {
  public:
    int findWinner(int n, int x, int y) {
        vector<int> dp (n+1, 0);
        
        for(int i =1; i <= n; i++) 
        {
            if( i - 1 >= 0 && !dp[i - 1]) {
                dp[i] = 1;
            } else if( i -x >= 0 && !dp[i - x]) {
                dp[i] = 1;
            } else if ( i - y >= 0 && !dp[i - y]) {
                dp[i] = 1;
            }
        }
        return dp[n];
    }
};
