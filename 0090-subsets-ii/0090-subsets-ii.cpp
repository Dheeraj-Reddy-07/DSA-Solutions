class Solution {
public:
    void dfs(vector<int>& nums, vector<vector<int>>& ans,
             vector<int>& curr, int i) {
        ans.push_back(curr);
        for(int j = i; j < nums.size(); j++) {
            if(j > i && nums[j] == nums[j - 1])
                continue;
            curr.push_back(nums[j]);
            dfs(nums, ans, curr, j + 1);
            curr.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> curr;
        dfs(nums, ans, curr, 0);
        return ans;
    }
};