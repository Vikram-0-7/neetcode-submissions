class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int result=target-nums[i];
            if(map.count(result) && map[result]!=i){
                return{i,map[result]};
            }
        }
        return {};
    }
};
