class Solution {
    public boolean isValid(String s) {
        Stack<Character> st = new Stack<>();
       Map<Character, Character> mpp = Map.of(
        ')', '(',
        ']', '[',
        '}', '{'
    );
        for(Character it : s.toCharArray()){
            if(it == '{' || it == '(' || it == '['){
                st.push(it);
            }else{
                if(st.isEmpty()) return false;
                if(st.peek() != mpp.get(it)) return false;
                st.pop() ;
            }
        }

        return st.isEmpty();

    }
}