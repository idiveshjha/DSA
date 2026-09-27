class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int ans = 0;
        for(auto c : items){
            if(ruleKey == "type" && ruleValue == c[0]){
                ans++;
            }
            else if(ruleKey == "color" && ruleValue == c[1]){
                ans++;
            }
            else if(ruleKey == "name" && ruleValue == c[2]){
                ans++;
            }
        }
        return ans;
    }
};