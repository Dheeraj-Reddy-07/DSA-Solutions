class Solution {
public:
    int maxArea(vector<int>& height) {
        int h = height.size();
        int i = 0;
        int j = h-1;
        int maxi = INT_MIN;
        while(i<=j){
            int area = min(height[i], height[j])*(j-i);
            maxi = max(maxi,area);
            int mn = height[i]<height[j]?i:j;
            if(mn==i) i++;
            if(mn==j) j--;
        }
        return maxi;
    }
};