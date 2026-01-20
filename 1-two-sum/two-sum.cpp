class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> s;
        for (int i=0;i<nums.size();i++){
            int current_val= nums[i];
            int diff= target - current_val;
            if (s.count(diff)){
                return {s[diff],i};

            }
            s[nums[i]]= i;
        }
        return{};
    }
};