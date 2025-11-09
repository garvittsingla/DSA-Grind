class Solution {
    public boolean isPalindrome(int x) {
        int temp = x;
        int sum = 0;
        if(x<0) return false;
        while(temp!=0){
            int rem = temp%10;
            sum = sum*10 + rem;
            temp = temp/10;
        }
        System.out.println(sum);
        if(x==sum) return true;
        return false;

    }
}