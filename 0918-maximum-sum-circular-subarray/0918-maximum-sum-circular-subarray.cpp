class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int tot =0;
        int currmax = 0, maxsum = nums[0];
        int currmin = 0, minsum = nums[0];
        for(int x:nums){
            currmax = max(x,currmax+x);
            maxsum = max(maxsum, currmax);
            currmin = min(x,currmin+x);
            minsum = min(minsum, currmin);
            tot+=x;
        }
        if(maxsum<0) return maxsum;
        return max(maxsum, tot-minsum);
    }
};