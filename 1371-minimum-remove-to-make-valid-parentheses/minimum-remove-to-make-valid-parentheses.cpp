class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st; //stack to track the opening parenthesis
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i]== '('){
                st.push(i);
            }else if(s[i]==')'){
                if(st.size()>0){
                    st.pop();
                }else{
                    s[i] = ' ';
                }
            }else continue;
        }

        while(!st.empty()){
            s[st.top()] = ' ';
            st.pop();
        }
        

        string ans = "";
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i]!=' ') ans+=s[i];
        }
        return ans;
    }
};