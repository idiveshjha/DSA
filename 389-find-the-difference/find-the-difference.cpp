class Solution {
public:
    char findTheDifference(string s, string t) {
        int freq[26] = {0};
        char c;
        for(auto ch : t){
            freq[ch-'a']++;
        }
        for(auto ch : s){
            freq[ch-'a']--;
        }
        for(auto ch : t){
            if(freq[ch-'a']){
                return ch;
            }
        }
        return c;
    }
};