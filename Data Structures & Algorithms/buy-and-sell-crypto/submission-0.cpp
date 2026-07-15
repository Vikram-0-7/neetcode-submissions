class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result=0;
        int number=INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(prices[i]>number){
            result=max(prices[i]-number,result);
            }
            number=min(number,prices[i]);
        }
        return result;
    }
};
