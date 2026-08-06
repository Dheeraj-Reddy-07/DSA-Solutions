class Solution {
public:
    int mySqrt(int x) {
        int low = 0;
        int high = x;
        while(low<=high){
            long long mid = (low+high)/2;
            long long num = mid*mid;
            if(num==x){
                return mid;
            }
            else if(num<x){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return high;
    }
};