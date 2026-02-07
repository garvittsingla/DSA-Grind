class Solution {
public:
    int result = INT_MAX;
    void backtrack(int index,vector<int> &children,vector<int> &cookies){
        if(index>=cookies.size()){
            int maxele = *max_element(children.begin(),children.end());
            result = min(result,maxele);
            return;
        }
        for(int i = 0 ; i < children.size() ; i++){
            children[i]+=cookies[index];
            backtrack(index+1,children,cookies);
            children[i]-=cookies[index];
        }
    }
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int> children(k,0);
        backtrack(0,children,cookies);
        return result;
    }
};