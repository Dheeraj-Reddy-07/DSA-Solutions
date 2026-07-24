class Solution {
public:
    bool ispalindrome(string &t, int i, int j){
        while(i<=j){
            if(t[i]!=t[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i =0, j = s.size()-1;
        while(i<=j){
            if(s[i]!=s[j]){
                return ispalindrome(s,i+1,j)||ispalindrome(s,i,j-1);
            }
            i++;
            j--;
        }
        return true;
    }
};