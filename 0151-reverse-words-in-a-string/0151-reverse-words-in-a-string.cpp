class Solution {
public:
    string reverseWords(string s) {
        vector<string> final;
        string word = "";
        for(int i = s.length() -1; i >= 0 ; i--){
           if(s[i]!=' '){
            word.insert(word.begin(),s[i]);
           }else{
            if(!word.empty()){
                final.push_back(word);
                word = "";
            }
           }
        }
        if(!word.empty()){
                final.push_back(word);
                word = "";
        }
        s = "";
        for(int i =0  ;i  < final.size() ; i++){
            string word;
            if(i != final.size()-1){
                word = final[i] + ' ';
            }else{
                word = final[i];
            }
            s+=word;

        }

        return s;
    }
};