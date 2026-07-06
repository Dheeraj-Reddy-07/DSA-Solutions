class Solution {
public:
    int myAtoi(string s) {
        int i =0;
        int sgn = 1;
        long long res= 0;
        int n = s.size();
        while(i<n&&s[i]==' '){
            i++;
        }
        if(i==n){
            return 0;
        }
        if(i<n && (s[i]=='+' || s[i]=='-')){

            if(s[i]=='-')
                sgn = -1;

            i++;
        }
        long long num = 0;
        while(i<n && isdigit(s[i])){
            int dig = s[i]-'0';
            res = res*10 + dig;
            if(sgn==1 && res>INT_MAX){
                return INT_MAX;
            }
            if(sgn==-1 && -res<INT_MIN){
                return INT_MIN;
            }
        i++;
        }
        return int(sgn*res);
    }
};