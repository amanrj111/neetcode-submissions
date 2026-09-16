class Solution {
public:
    bool isValid(string s) {

        stack<char> st;
        for(int i = 0; i < s.length(); i++) {
            char ch  = s[i];
            // openning bracket -> push
            if(ch == '(' || ch == '[' || ch == '{' ){
                // insert
                st.push(ch);
            } else {
                // closing bracket
                // pre-check -> stack empty
                if(st.empty()){
                    return false;
                }
                else if(ch == ')' && st.top() != '('){
                    // no match
                    return false;
                }
                else if(ch == '}' && st.top() != '{'){
                    return false;
                }
                else if(ch == ']' && st.top() != '['){
                    return false;
                } else {
                    // match
                    st.pop();
                }
            }
        }
        // ye bhul mat jana 
        return st.empty();
    }
};
