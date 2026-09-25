class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m = s.length();
        int n = t.length();
        int i = 0, j = 0;
        
        while(i<m && j<n){
            if(s[i] == t[j]){ //found the character of s
                i++;
            }
            j++; //always traverse in t
        }
        return i == m;//if traversed in s -> true
        
    }
};