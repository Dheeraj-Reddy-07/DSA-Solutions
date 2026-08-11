class Solution {
public:
    void dfs(vector<vector<int>> &ans, vector<int> &curr,vector<int>&nums, vector<bool> &used){
        if(curr.size()==nums.size()){
            ans.push_back(curr);
            return;
        }
        for(int j = 0;j<nums.size();j++){
            if(used[j]) continue;
            curr.push_back(nums[j]);
            used[j] = true;
            dfs(ans,curr,nums,used);
            curr.pop_back();
            used[j]=false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        vector<bool> used(nums.size(),false);
        dfs(ans,curr,nums,used);
        return ans;
    }
};