class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        int n = asteroids.size();
        for (int i = 0; i < n; i++) {
            int x = asteroids[i];
            if (ans.empty() || ans.back() < 0 || x > 0) {
                ans.push_back(asteroids[i]);
            } else if (ans.back() == abs(x)) {
                ans.pop_back();
            } else {
                if (ans.back() < abs(x)) {
                    while (!ans.empty() && ans.back()>0 && ans.back() < abs(asteroids[i]) &&
                           asteroids[i] < 0) {
                        ans.pop_back();
                           }
                        if (ans.empty() || ans.back() < 0) {
                            ans.push_back(x);
                        } else if (ans.back() == abs(x)) {
                            ans.pop_back();
                        }
                }
            }
        }
        return ans;
    }
};