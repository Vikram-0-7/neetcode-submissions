#include <cstring>
// #include <algorthim>
class Solution {
public:
int dp[101];
    int s(vector<int>& cost,int i){
        if(i>=cost.size()){return 0;}
        if(dp[i]!=-1){
            return dp[i];
        }
        int take=cost[i]+s(cost,i+2);
        int nottake=cost[i]+s(cost,i+1);
        return dp[i]=min(take,nottake);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp,-1,sizeof(dp));
       int a= s(cost,0);
       int b= s(cost,1);

       return min(a,b);
    }
};
