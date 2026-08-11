class Solution {
public:
    int dfs(vector<int>&nums, int st, int x){
        if(st==nums.size()) return x;
        int take = dfs(nums,st+1,x^nums[st]);
        int leave = dfs(nums,st+1,x);
        return take+leave;
    }
    int subsetXORSum(vector<int>& nums) {
        return dfs(nums,0,0);
    }
};