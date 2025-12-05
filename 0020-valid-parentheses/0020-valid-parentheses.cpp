class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,char> mpp = {{')','('},{']','['},{'}','{'}};
        for(char ch:s){
            if(ch == '(' || ch== '{' || ch=='['){
                st.push(ch);
            }else{
                char opposite = mpp[ch];
                if(st.empty()) return false;
                 if(st.top() == opposite){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};