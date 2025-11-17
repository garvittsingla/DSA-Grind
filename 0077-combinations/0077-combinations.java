class Solution {
    static List<List<Integer>> answer = new ArrayList<>();
    private void helper(int n,int current,int k,List<Integer> ds){
        if(ds.size() == k){
            answer.add(new ArrayList<>(ds));
            return;
        }
        if(current > n) return;
        for(int i = current+1 ; i <= n ; i++){
            ds.add(i);
            helper(n,i,k,ds);
            ds.remove(ds.size()-1);
        }
       
    }
    public List<List<Integer>> combine(int n, int k) {
        answer.clear();
        helper(n,0,k,new ArrayList<>(1));
        return answer;
    }
}