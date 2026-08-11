class Solution {
public:
    void dfs(vector<int>&nums,vector<vector<int>> &ans, int ind, vector<int>& curr){
        if(ind == nums.size()) {
            ans.push_back(curr);
            return;
        }
        curr.push_back(nums[ind]);
        dfs(nums,ans,ind+1,curr);
        curr.pop_back();
        dfs(nums,ans,ind+1,curr);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        dfs(nums,ans,0,curr);
        return ans;
    }
};