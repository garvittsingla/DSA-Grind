class Solution {
public:
    vector<string> ans;

    void backtrack(string num, int target,
                   long current, long prev,
                   string ds, int index) {

        if(index >= num.size()){
            if(target == current) ans.push_back(ds);
            return;
        }

        string small = "";

        for(int i = index ; i < num.size() ; i++){

            // 🔴 added leading zero check (important fix)
            if(i > index && num[index] == '0') break;

            small += num[i];

            long digits = stol(small);   // 🔴 ensure long type

            // addition
            backtrack(num, target,
                      current + digits,
                      digits,
                      ds + "+" + small,
                      i + 1);

            // subtraction (prev must be negative)
            backtrack(num, target,
                      current - digits,
                      -digits,
                      ds + "-" + small,
                      i + 1);

            // multiplication (fix precedence using prev)
            backtrack(num, target,
                      current - prev + (prev * digits),
                      prev * digits,
                      ds + "*" + small,
                      i + 1);
        }
    }

    vector<string> addOperators(string num, int target) {

        // 🔴 FIX: first number can be multi-digit
        for(int i = 0; i < num.size(); i++) {

            // 🔴 leading zero check for first number
            if(i > 0 && num[0] == '0') break;

            string first = num.substr(0, i+1);
            long val = stol(first);

            backtrack(num,
                      target,
                      val,
                      val,
                      first,
                      i+1);
        }

        return ans;
    }
};
