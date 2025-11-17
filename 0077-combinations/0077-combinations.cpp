class Solution {
public:
    vector<vector<int>> solution;
    void helper(int n,int k,vector<int> ds,int current){
        if(ds.size() == k){
            solution.push_back(ds);
            return;
        }
        if(ds.size() > k || current > n ) return;
        for(int i = current + 1 ; i <= n ; i++){
            ds.push_back(i);
            helper(n,k,ds,i);
            ds.pop_back();
        }
        
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> ds;
        helper(n,k,ds,0);
        return solution;
    }
};