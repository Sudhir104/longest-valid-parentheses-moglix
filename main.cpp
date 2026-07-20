#include<bits/stdc++.h>
using namespace std;

int longestValidParentheses(string s){
    int n = s.length();
    stack<int> st;
    st.push(-1);
    int maxlength = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == '(') {
            st.push(i);
        }
        else {
            st.pop();
            if(st.empty()){
                st.push(i);
            }
            else {
                maxlength = max(maxlength, i - st.top());
            }
        }
    }
    return maxlength;
}

int main(){
    string s;
    getline(cin, s);
    cout << longestValidParentheses(s) << endl;
    return 0;
}