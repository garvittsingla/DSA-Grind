class Solution {
public:
    bool isIpv4(string &s){
        if(s.length() > 20) return false;
        int dots = 0;
        string small = "";
        for(int i  = 0 ; i < s.size() ; i++){
            if(s[i]=='.'){
                dots++;
                if(small.size() == 0) return false;
               
                if(small.size() > 1 && small[0] == '0') return false;
                 int num = stoi(small);
                if(num < 0 || num > 255) return false;
                small = "";
            }else{
                if(s[i] >= '0' && s[i] <= '9'){
                    small += s[i];
                }else{
                    return false;
                }
            }
        }
        if(small.size() == 0) return false;
        if(small.size() > 1 && small[0] == '0') return false;
        int num = stoi(small);
        if(num < 0 || num > 255) return false;
        if(dots == 3) return true;
        return false;

    }
    bool isipv6(string &s){
        int cols = 0;
        int block = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == ':'){
                if(block == 0) return false;
                cols++;
                block = 0;
            }
            else{
                if(isalpha(s[i])){
                    if(isupper(s[i]) && s[i] > 'F') return false;
                    else if(islower(s[i]) && s[i] > 'f') return false;
                }
                block++;
                if(block > 4) return false;
            }
        }
        if(block == 0) return false;
        return cols == 7 ? true : false;
    }
    string validIPAddress(string s) {
        if(isIpv4(s)){
            return "IPv4";
        }
        if(isipv6(s)){
            return "IPv6";
        }
        return "Neither";
    }
};