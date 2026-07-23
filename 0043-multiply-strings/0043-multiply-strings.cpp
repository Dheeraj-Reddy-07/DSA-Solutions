class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0") return "0";
        int n1 = num1.size();
        int n2 = num2.size();
        vector<int> ans(n1+n2,0);
        for(int i=n1-1;i>=0;i--){
            for(int j =n2-1;j>=0;j--){
                ans[i+j+1] += (num1[i]-'0') * (num2[j] - '0');
                ans[i+j] += ans[i+j+1]/10;
                ans[i+j+1]%=10;
            }
        }
        string an = "";
        int i = 0;
        while (ans[i] == 0) i++;
        while (i < ans.size()) an += to_string(ans[i++]);
        return an;
    }
};