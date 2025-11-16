class Solution {
    public int numSub(String s) {
        char[] arr = s.toCharArray();
        int count = 0 ; 
        int maximumingroup = 0;
        for(char ch:arr){
            if(ch == '1'){
                maximumingroup++;
                count = (count+maximumingroup)% 1000000007;
            }else{
                maximumingroup = 0;
            }
        }
        return (int)(count);
    }
}