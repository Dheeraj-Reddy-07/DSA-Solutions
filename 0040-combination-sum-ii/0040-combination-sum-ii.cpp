class Solution {
public:
    void dfs(vector<int>& candidates, vector<vector<int>> &ans, vector<int>&curr, int target, int i){
        if(target==0){
            ans.push_back(curr);
            return;
        }
        for(int j =i;j<candidates.size();j++){
            if(j>i && candidates[j]==candidates[j-1]){
                continue;
            }
            if(candidates[j]>target){
                break;
            }
            curr.push_back(candidates[j]);
            dfs(candidates,ans,curr,target-candidates[j],j+1);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        int sum =0;
        vector<int> curr;
        dfs(candidates, ans, curr, target, 0);
        return ans;
    }
};