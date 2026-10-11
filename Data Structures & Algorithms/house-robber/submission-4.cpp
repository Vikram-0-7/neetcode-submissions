#include<cstring>
class Solution {
public:
int dp[101];
int s(vector<int>& nums, int i){
    if(i>=nums.size()){
        return 0;
    }
    if(dp[i]!=-1) return dp[i];
    int take=nums[i]+s(nums,i+2);
    int nottake=s(nums,i+1);
    return dp[i]=max(take,nottake);
}

    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
       return s(nums,0);
    }
};