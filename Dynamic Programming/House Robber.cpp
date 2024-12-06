class Solution {
public:


int sol(int i ,vector<int>& nums,vector<int>&dp )
{
    if(i==0)return nums[i];
    if(i<0) return 0;

    if(dp[i]!=-1) return dp[i];

    int t=nums[i]+sol(i-2,nums,dp);

    int nt =sol(i-1,nums,dp);

    return dp[i]=max(t,nt);
}

    int rob(vector<int>& nums) {
        int n= nums.size();
        vector<int>dp(n,-1);
        return sol(n-1,nums,dp);
    }
};