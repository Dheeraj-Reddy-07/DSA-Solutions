class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        int maxi =0;
        double avg = 0;
        for(int i =0;i<k;i++){
            sum+=nums[i];
        }
        maxi = sum;
        for(int i = k;i<n;i++){
            sum+=nums[i];
            sum-=nums[i-k];
            maxi = max(sum, maxi);
        }
        avg = double(maxi)/double(k);
        return avg;
    }
};