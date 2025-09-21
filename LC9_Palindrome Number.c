bool isPalindrome(int x) {
    double rev=0,d,temp=x;
    while(x>0)
    {
        d = x%10;     //Fetching each digit of the number in reverse order
        rev = (rev*10)+d;     
        x = x/10;
    }
    if(rev == temp)
        return true;
    else
        return false;
}
