class Solution {
public:
    vector<vector<int>> result;
    void solve(vector<int> ds,int k,int n,int curr){
        if(ds.size()==k){
            result.push_back(ds);
            return;
        }
        if(curr > n) return;

        for(int i = curr; i <= n ; i++){
            ds.push_back(i);
            solve(ds,k,n,i+1);
            ds.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> ds;
        solve(ds,k,n,1);
        return result;
    }
};