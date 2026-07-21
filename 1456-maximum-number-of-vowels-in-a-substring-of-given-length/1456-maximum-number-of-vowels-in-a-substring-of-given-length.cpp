class Solution {
public:
    bool isVowel(char &ch){
        return string("aeiou").find(tolower(ch))!=string::npos;
    }
    int maxVowels(string s, int k) {
        int cnt = 0;
        int n = s.size();
        for(int i =0;i<k;i++){
            if(isVowel(s[i])){
                cnt++;
            }
        }
        int maxi = cnt;
        for(int i = k;i<n;i++){
            if(isVowel(s[i])){
                cnt++;
            }
            if(isVowel(s[i-k])){
                cnt--;
            }
            maxi = max(maxi,cnt);
        }
        return maxi;
    }
};