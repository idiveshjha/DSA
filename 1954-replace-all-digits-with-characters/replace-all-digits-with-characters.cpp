class Solution {
public:

    char shift(char x, int a) {
        return x + a;
    }

    string replaceDigits(string s) {
        string ans = "";

        for(int i = 0; i < s.length(); i++) {
            if(isdigit(s[i])) { //inbuilt func isdigit
                ans += shift(s[i - 1], s[i] - '0');
            }
            else {
                ans += s[i];
            }
        }

        return ans;
    }
};