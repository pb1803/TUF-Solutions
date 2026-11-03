class Solution {
private:
    int precedence(char c) {
        if (c == '^') return 3;
        if (c == '*' || c == '/') return 2;
        if (c == '+' || c == '-') return 1;
        return -1;
    }

public:
    string infixToPostfix(string s) {
        stack<char> st;
        string out = "";
        
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            
            // If operand (lowercase letter or digit), add to output
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
                out += c;
            }
            // If '(', push to stack
            else if (c == '(') {
                st.push('(');
            }
            // If ')', pop until '(' is found
            else if (c == ')') {
                while (!st.empty() && st.top() != '(') {
                    out += st.top();
                    st.pop();
                }
                if (!st.empty()) {
                    st.pop(); // Pop '('
                }
            }
            // If an operator is encountered
            else {
                while (!st.empty() && precedence(c) <= precedence(st.top())) {
                    // Right associative '^' exception
                    if (c == '^' && st.top() == '^') break;
                    out += st.top();
                    st.pop();
                }
                st.push(c);
            }
        }
        
        // Pop all remaining operators from the stack
        while (!st.empty()) {
            out += st.top();
            st.pop();
        }
        
        return out;
    }
};