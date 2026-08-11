class Solution {
public:
    void dfs(vector<int>& candidates, vector<vector<int>> &ans, vector<int>&curr, int target, int i){
        if(target==0){
            ans.push_back(curr);
            return;
        }
        if(i==candidates.size()||target<0){
            return;
        }
        curr.push_back(candidates[i]);
        dfs(candidates, ans, curr, target-candidates[i],i);
        curr.pop_back();
        dfs(candidates, ans, curr, target,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        int sum =0;
        vector<int> curr;
        dfs(candidates, ans, curr, target, 0);
        return ans;
    }
};