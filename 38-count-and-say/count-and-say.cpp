class Solution {
public:
    string countAndSay(int n) {
        //if(n==1) return "1";
        string ans = "1";
        for(int i = 1 ; i < n ; i++){
            string temp = ans;
            string small = "";
            int count = 1;
            char current = temp[0];
            for(int j = 1 ; j < temp.size() ; j++){
                if(current == temp[j]){
                    count++;
                }else{
                    small+=to_string(count);
                    small+=current;
                    current = temp[j];
                    count = 1;
                }
            }
            small += to_string(count);
            small+=current;
            ans = small;
        }
        return ans;
    }
};