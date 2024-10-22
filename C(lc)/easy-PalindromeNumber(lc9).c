bool isPalindrome(int x) {
    long int x1=x;
    long int rev=0;
    bool val=false;
    while(x1>0)
    {
        int y=x1%10;
        rev=rev*10+y;
        x1=x1/10;
    }
    if(rev==x)
    {
        val = true;
    }
    return val;
}