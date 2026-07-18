#include <stack>
class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st;
        for (char i: s){
            switch (i){
                case '(':
                case '[': 
                case '{':
                st.push(i);
                break;

                case ')':
                if (st.empty() || st.top() != '(') { return false; }
                else{ st.pop(); break;}

                case ']':
                if (st.empty() || st.top() != '[') { return false; }
                else{ st.pop(); break;}

                case '}':
                if (st.empty() || st.top() != '{') { return false; }
                else{ st.pop(); break;}
            }
        }
    return st.size() == 0;
    }
};