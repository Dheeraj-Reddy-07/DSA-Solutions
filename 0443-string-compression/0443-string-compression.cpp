class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0, n = chars.size(), count = 0;
        string temp = "";
        while(i<n){
            char ch = chars[i];
            count = 0;
            while(i<n && chars[i]==ch){
                i++;
                count++;
            }
            temp+=ch;
            if(count>1){
                temp+=to_string(count);
            }
        }
        for(int i=0;i<temp.size();i++){
            chars[i] = temp[i];
        }
        return temp.size();
    }
};