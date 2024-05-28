class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        if (n == 0) return 0;
        if (n == 1) return cost[0];

        // dp[i] represents the minimum cost to reach step i
        std::vector<int> dp(n + 1, 0);

        // Initial conditions
        dp[0] = 0;
        dp[1] = 0;

        for (int i = 2; i <= n; ++i) {
            dp[i] = std::min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
        }

        return dp[n];
    }
};
