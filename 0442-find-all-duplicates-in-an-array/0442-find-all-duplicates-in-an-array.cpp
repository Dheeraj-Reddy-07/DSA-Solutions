class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        for (int i = 0; i < n; i++) {
            int val = abs(nums[i]);
            int idx = val - 1;
            if (nums[idx] < 0) {
                res.push_back(val);
            } else {
                nums[idx] = -nums[idx];
            }
        }
        return res;
    }
};