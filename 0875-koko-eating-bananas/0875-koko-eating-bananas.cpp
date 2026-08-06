class Solution {
    private:
    long long total_hours(vector<int>&piles, int speed){
        long long hrs =0;
        for(int pile:piles){
            hrs+=ceil((double)pile/speed);
        }
        return hrs;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = *max_element(piles.begin(), piles.end());
        int low = 1;
        int high = maxi;
        int ans = maxi;
        while(low<=high){
            int mid = (low+high)/2;
            long long curr = total_hours(piles, mid);
            if(curr<=h){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};