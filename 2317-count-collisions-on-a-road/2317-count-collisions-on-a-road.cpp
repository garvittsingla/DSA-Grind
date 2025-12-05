class Solution {
public:
    int countCollisions(string directions) {
       stack<char> st;
       int ans = 0;
       for(int i = 0 ; i < directions.size() ; i++){
            st.push(directions[i]);
            while(st.size()>1){
                char current = st.top();
                st.pop();
                char prev = st.top();
                st.pop();
                if(current == 'L' && prev == 'R'){
                    ans+=2;
                    st.push('S');
                    continue;
                }else if(current == 'S' && prev =='R' ){
                    ans+=1;
                    st.push('S');
                    continue;

                }else if(current == 'L' && prev == 'S' ){
                    ans+=1;
                    st.push('S');
                    continue;

                }else{
                    st.push(prev);
                    st.push(current);
                    break;
                }
            }
            
       }
       return ans;
    }
};