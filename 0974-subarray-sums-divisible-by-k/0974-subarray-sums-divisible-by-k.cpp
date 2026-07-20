class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> arr(k);
        arr[0] = 1;
        int sum =0;
        int count = 0;
        for(int i =0;i<n;i++){
            sum+=nums[i];
            int rem = ((sum%k)+k)%k;
            count+=arr[rem];
            arr[rem]++;
        }
        return count;
    }
};