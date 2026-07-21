class Solution {
public:
    int trap(vector<int>& height) {
        int st = 0;
        int end = height.size()-1;
        int leftmax = 0;
        int rightmax = 0;
        int ans = 0;
        while(st<end){
            leftmax = max(leftmax, height[st]);
            rightmax = max(rightmax, height[end]);
            if(leftmax<rightmax){
                ans+=leftmax - height[st];
                st++;
            }
            else{
                ans+=rightmax - height[end];
                end--;
            }
        }
        return ans;
    }
};