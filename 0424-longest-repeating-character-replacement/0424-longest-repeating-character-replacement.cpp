class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int i = 0, maxfreq =0;
        int res = 0;
        vector<int> freq(26,0);
        for(int j =0;j<n;j++){
            freq[s[j]-'A']++;
            maxfreq = max(maxfreq,freq[s[j]-'A']);
            while((j-i+1-maxfreq)>k){
                freq[s[i]-'A']--;
                i++;
            }
            res = max(res,j-i+1);
        }
        return res;
    }
};