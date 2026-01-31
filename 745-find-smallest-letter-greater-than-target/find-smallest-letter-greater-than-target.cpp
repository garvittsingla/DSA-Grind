class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans = '}';
        for(auto character:letters){
            if(int(character)>int(target)){
                ans = int(character)<int(ans) ? character : ans;
            }
        }
        return ans == '}' ? letters[0] : ans;
    }
};