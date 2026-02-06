class Solution {
public:
    vector<vector<int>> result;
    void backtrack(int k,int index,int target,int current,vector<int> ds){
        if(current == target && ds.size() == k){
            result.push_back(ds);
            return;
        }
        if(ds.size()> k || current > target) return;
        for(int i = index; i < 10 ; i++){
           if(ds.size() < k && current+1  <= target){
                ds.push_back(i);
                backtrack(k,i+1 ,target, current+ i, ds);
                ds.pop_back();
           }
        }

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        backtrack(k,1,n,0,{});
        return result;
    }
};