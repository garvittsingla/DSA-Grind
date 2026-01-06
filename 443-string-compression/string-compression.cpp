class Solution {
public:
    int compress(vector<char>& chars) {
      int i = 0;
      int j = 0;
      char current = chars[0];
      int counter = 0;
      while(j < chars.size()){
        if(current == chars[j]){
            counter++;
        }else{
            chars[i++] = current; //set as current character
            if(counter>1){
                string str = to_string(counter);
                for(auto chart:str){
                    chars[i++] = chart;
                }
            }

            current = chars[j];
            counter = 1;

        }
        j++;
      }
      ///handle the last case
      chars[i++] = current;
        if(counter > 1){
            string str = to_string(counter);
            for(auto chart : str){
                chars[i++] = chart;
            }
        }
        
      return i;
    }
};