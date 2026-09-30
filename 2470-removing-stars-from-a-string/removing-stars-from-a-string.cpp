class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        int n = s.length();
        string ans = "";

        for(int i = 0; i<n; i++){
            if(s[i] == '*'){
                st.pop();
                continue;
            }
            else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            char a = st.top();
            ans += a;
            st.pop();
        }

        int i = 0;
        int j = ans.length()-1;
        while(i<j){
            swap(ans[i], ans[j]);
            i++;
            j--;
        }

        return ans;

    }
};