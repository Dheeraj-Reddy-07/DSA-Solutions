class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int sum =0;
        unordered_map<int,int> mp;
        mp[0] = -1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int req = sum%k;
            if(mp.count(req)){
                if(i-mp[req]>=2){
                    return true;
                }
            }
            else{
            mp[req] = i;
            }
        }
        return false;
    }
};