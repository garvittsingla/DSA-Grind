class Solution {
public:
    vector<int> ans;
    void backtrack(int n, string current,int index){
        // if(current.size() == 0) return;
        // if(current.size()!=0 && stoi(current) <= n){
            if(current.size()!=0 && stoi(current) > n) return;
            if(current.size()!=0 )ans.push_back(stoi(current));
            // return;
        // }
        
        for(int i = index ; i <= 9 ; i++){
           if(current.size()==0 && i == 0) continue;
           backtrack(n,current+to_string(i),0);
        }
    }
    vector<int> lexicalOrder(int n) {
        backtrack(n,"",0);
        return ans;
    }   
};