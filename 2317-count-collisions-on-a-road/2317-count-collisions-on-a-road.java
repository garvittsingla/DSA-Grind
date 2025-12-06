class Solution {
    public int countCollisions(String directions) {
        Stack<Character> st = new Stack<>();
        int count = 0;
        for(int i=  0 ; i < directions.length() ; i++){
            Character ch = directions.charAt(i);
            st.push(ch);
            while(st.size()>1){
                Character current = st.pop();
                Character prev = st.pop();
                if(current == 'L' && prev =='R'){
                    count+=2;
                    st.push('S');
                }else if(current == 'S' && prev == 'R'){
                    count++;
                    st.push('S');
                }else if(current == 'L' && prev == 'S'){
                    count++;
                    st.push('S');
                }else{
                    st.push(prev);
                    st.push(current);
                    break;
                }
                
            }
        }
        return count;
    }
}