class Solution {
public:
    vector<vector<int>> result;
    void solve(int k,vector<int> ds,int n,int current){
       if(ds.size() == k){
        result.push_back(ds);
        return;
       }
       for(int i = current ; i <= n ;i++){
        ds.push_back(i);
        solve(k,ds,n,i+1);
        ds.pop_back();
       }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> ds;
        solve(k,ds,n,1);
        return result;
    }
};