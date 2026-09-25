class Solution {
public:
    bool squareIsWhite(string s) {
        for(int i = 0; i<s.length(); i++){
            if(s[i] == 'a' || s[i] == 'c' || s[i] == 'e' || s[i] == 'g'){
                if(s[i+1] == '1' || s[i+1] == '3' || s[i+1] == '5' || s[i+1] == '7'){
                    return false;
                }
                else return true;
            }
            else{
                if(s[i+1] == '2' || s[i+1] == '4' || s[i+1] == '6' || s[i+1] == '8'){
                    return false;
                }
                else return true;
            }
        }
        return true;
    }
};