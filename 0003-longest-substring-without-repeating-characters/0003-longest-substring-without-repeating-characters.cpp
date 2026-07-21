class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i=0;
        int j = 0;
        int maxi =0;
        unordered_map<char,int> mpp;
        for(int i =0;i<n;i++){
            if(mpp.count(s[i])==0){
                mpp[s[i]] = i;
            }
            else{
                j = max(j, 1+mpp[s[i]]);
            }
            mpp[s[i]] = i;
            maxi = max(maxi, i-j+1);
        }
        return maxi;
    }
};