class Solution {
    List<String> answer = new ArrayList<>();
    
    String[] map = {
        "",     // 0
        "",     // 1
        "abc",  // 2
        "def",  // 3
        "ghi",  // 4
        "jkl",  // 5
        "mno",  // 6
        "pqrs", // 7
        "tuv",  // 8
        "wxyz"  // 9
    };

    private void combination(String digits, int index, String ds) {
        if (index == digits.length()) {
            answer.add(ds);
            return;
        }

        int digit = digits.charAt(index) - '0';
        String letters = map[digit];

        for (int i = 0; i < letters.length(); i++) {
            combination(digits, index + 1, ds + letters.charAt(i));
        }
    }

    public List<String> letterCombinations(String digits) {
        if (digits.length() == 0) return new ArrayList<>();
        
        combination(digits, 0, "");
        return answer;
    }
}
