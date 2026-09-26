class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int ans = 0;
        vector<int> maxl;

        for(auto c : rectangles){
            maxl.push_back(min(c[0], c[1]));
        }

        int maxi = 0;

        for(auto x : maxl){
            maxi = max(maxi, x);
        }

        for(auto x : maxl){
            if(x == maxi){
                ans++;
            }
        }

        return ans;
    }
};