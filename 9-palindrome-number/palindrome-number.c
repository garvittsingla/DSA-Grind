bool isPalindrome(int x) {
    int num = x;
    long int rev = 0;
    if(num < 0) return false;
    while(num!=0){
        int rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }
    if(x == rev) return true;
    return false;
}