class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char &ch : s){
            if(st.empty() || ch == '(' || ch == '{' || ch == '['){
                    st.push(ch);
                    continue;
            }

            else if(ch == ')'){
                if(st.top() == '('){
                    st.pop();
                }
                else{
                    return false;
                }
            }

            else if(ch == '}'){
                if(st.top() == '{'){
                    st.pop();
                }
                else{
                    return false;
                }
            }

            else if(ch == ']'){
                if(st.top() == '['){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.empty(); //if stack is empty, return true else return false as the answer.
    }
};