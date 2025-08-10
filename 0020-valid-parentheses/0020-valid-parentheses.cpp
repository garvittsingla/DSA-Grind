class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,char> combinations = {{')','('},{']','['},{'}','{'}};
        if (s.size()%2!=0) return false;
        for (auto &it:s){
            if(it =='(' || it == '{' || it == '['){
                st.push(it);
            }else{
               if (st.empty() || st.top() != combinations[it]) {
                    return false;
                }
                st.pop();
            }
        }
        return (st.empty());
    }
};