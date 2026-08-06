class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        while(low<=high){
            int mid = (low+(high-low)/2);
            int d = 1, load =0;
            for(int w:weights){
                if(load+w>mid){
                    d++;
                    load =0;
                }
                load+=w;
            }
            if(d>days){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
            //if capacity is small it takes more number of days
        }
        return low;
    }
};