class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        int n = s.length();

        for(int i = 0; i<n; i++){
            if(s[i] == '*'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        
        string ans(st.size(),' ');
        for(int i = st.size()-1; i>=0; i--){
            ans[i] = st.top();
            st.pop();
        }

        return ans;

    }
};