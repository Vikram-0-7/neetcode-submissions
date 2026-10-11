#include<cstring>
class Solution {
public:
int dp[101]; 
int t[101]; 
int s(vector<int>& nums,int i){
    if(i>=nums.size()-1 ){
        return 0;
    }
    if(dp[i]!=-1)return dp[i];
    int take=nums[i]+s(nums,i+2);
    int nottake=s(nums,i+1);
    return dp[i]=max(take,nottake);
}
int solve(vector<int>& nums,int i){
    if(i>=nums.size()){
        return 0;
    }
    if(t[i]!=-1)return t[i];
    int h=nums[i]+solve(nums,i+2);
    int j=solve(nums,i+1);
    return t[i]=max(h,j);
}
    int rob(vector<int>& nums) {
        if(nums.size()<=1){
            return nums[0];
        }
        memset(dp,-1,sizeof(dp));
        memset(t,-1,sizeof(t));
        int a=s(nums,0);
        int b=solve(nums,1);
        return max(a,b);
    }
};
