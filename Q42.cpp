// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input 
// string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s[0]==')'|| s[0]=='}'|| s[0]==']'){
            return false;
        }
        for(char ch:s){
            if(ch=='('|| ch=='{'|| ch=='['){
                st.push(ch);
            }
            else{
                if(st.empty())
                    return false;
                if((ch==')' && st.top()=='(')||
                (ch=='}' && st.top()=='{')||
                (ch==']'&& st.top()=='[')){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};