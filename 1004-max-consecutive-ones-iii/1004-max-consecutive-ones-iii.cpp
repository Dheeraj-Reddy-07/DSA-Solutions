class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        int maxi = 0;
        int zero = 0;
        while (i < n) {
            if (nums[i] == 0) {
                zero++;
            }
            while (zero > k) {
                if (nums[j] == 0)
                    zero--;
                j++;
            }
        maxi = max(maxi, i - j + 1);
        i++;
    }
    return maxi;
}
};