class Solution {
public:
    int firstUniqChar(string s) {
        int ans = -1;
        vector<int> freq(26, 0);

        for(char c : s){
            freq[c-'a']++;
        }

        for(char c : s){
            ans++;
            if(freq[c-'a'] == 1){
                return ans;
            }
        }
        return -1;
    }
};