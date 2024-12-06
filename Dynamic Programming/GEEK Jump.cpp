 int minimumEnergy(vector<int>& height, int n) {
        // Code here
        if (n == 1) return 0;

    // Create a DP array for memoization
    vector<int> dp(n, -1);
    dp[0] = 0; // Energy required to stay at the first step is 0

    // Fill the DP array iteratively
    for (int i = 1; i < n; ++i) {
        int jumpOne = dp[i - 1] + abs(height[i] - height[i - 1]);
        int jumpTwo = INT_MAX;
        if (i > 1) {
            jumpTwo = dp[i - 2] + abs(height[i] - height[i - 2]);
        }
        dp[i] = min(jumpOne, jumpTwo);
    }

    return dp[n - 1];