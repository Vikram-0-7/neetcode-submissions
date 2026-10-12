#include <cstring>
class Solution {
   public:
    int dp[10001][11];
    int solve(vector<int>& coins, int amount, int i) {
        if (i < 0) {
            return INT_MAX-1;
        }
        if (amount == 0) {
            return 0;
        }
        if (dp[amount][i] != -1) return dp[amount][i];
        int take = INT_MAX;
        int nottake = INT_MAX;
        if (amount - coins[i] >= 0) {
            take = 1 + solve(coins, amount - coins[i], i);

           
        }
        nottake = solve(coins, amount, i - 1);
        dp[amount][i] = min(take, nottake);
        return dp[amount][i];
    }
    int coinChange(vector<int>& coins, int amount) {
        memset(dp, -1, sizeof(dp));
        int ans = solve(coins, amount, coins.size() - 1);

        if (ans == INT_MAX-1) return -1;
        if (ans == INT_MIN) return -1;

        return ans;
    }
};
