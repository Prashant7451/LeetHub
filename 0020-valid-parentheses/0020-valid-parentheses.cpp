class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto &it:s){
            if(it==']'){
                if(!st.empty() && st.top()=='['){
                    st.pop();
                }
                else
                    return false;
            }
            else if(it=='}'){
                if( !st.empty() && st.top()=='{'){
                    st.pop();
                }
                else
                    return false;
            }
            else if(it==')'){
                if( !st.empty() && st.top()=='('){
                    st.pop();
                }
                else
                    return false;
            }
            else{
                st.push(it);
            }
        }
        if(st.size()>0)
            return false;
        else
            return true;
    }
};