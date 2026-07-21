class Solution {
public:
    int maxArea(vector<int>& height) {
        int h = height.size();
        int i = 0;
        int j = h - 1;
        int maxi = 0;
        while (i < j) {
            int area = min(height[i], height[j]) * (j - i);
            maxi = max(maxi, area);
            if (height[i] < height[j])
                i++;
            else
                j--;
        }
        return maxi;
    }
};