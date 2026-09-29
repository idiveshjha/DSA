class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        int s = num.length()-1;
        for(int i = s; i>=0; i--){
            if(num[i] == '0'){
                continue;
            }
            else if((num[i]-'0')%2 != 0){
                return num.substr(0,i+1);
            }
        }
        return ans;
    }
};