class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int res=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            res^=i^nums[i];
        }
        return res;
    }
};
