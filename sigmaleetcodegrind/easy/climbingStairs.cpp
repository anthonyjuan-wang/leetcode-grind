class Solution {
public:
    int climbStairs(int n) {
        // n = n - 1 + (n-2)
        // This is because from (n-1), there's one step to get to n. Also, from (n-2), there's two ways to get to n. 


        // THEY KEY POINT TO REALIZE HERE IS 
        // path(n) = path (n-1) + path (n-2)
        /* from n - 1, there is only 1 step to get to n, so there remains n- 1 paths from n - 1 to n. For n - 2, there is only ONE unique step to get to n, taking two steps from n - 2 (all one step actions are accounted for ) */
        if (n == 1)return 1;
        if (n == 2)return 2;
        int dp[n+1];
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        for (int i = 3; i <= n; i++){
            dp[i] = dp[i-1] + dp[i - 2];
        } 
        return dp[n];
    }
};
