class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int n=nums.size();
        unordered_map<int,int> um;
        for(int i=0;i<n;i++){
            int diff=target-nums[i];
            if(um.find(diff)!=um.end()){
                return {um[diff],i};
            }
            um[nums[i]]=i;
        }
        return {};
    }
};