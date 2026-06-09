class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;

        for (string s : tokens) {
            if(s == "+"){
                int n1 = stoi(st.top());
                st.pop();
                int n2 = stoi(st.top());
                st.pop();
                st.push(to_string(n1+n2));
            }
            else if(s == "-"){
                int n1 = stoi(st.top());
                st.pop();
                int n2 = stoi(st.top());
                st.pop();
                st.push(to_string(n2-n1));
            }
            else if(s == "*"){
                int n1 = stoi(st.top());
                st.pop();
                int n2 = stoi(st.top());
                st.pop();
                st.push(to_string(n1*n2));
            }
            else if(s == "/"){
                int n1 = stoi(st.top());
                st.pop();
                int n2 = stoi(st.top());
                st.pop();
                int ans = n2/n1;
                st.push(to_string(ans));
            }
            else {
                st.push(s);
            }
        }
        return stoi(st.top());
    }
};