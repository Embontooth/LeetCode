class Solution {
    public String longestPalindrome(String s) {
        if(s==null || s.length()<1)
        {
            return "";
        }
        int start = 0;
        int end = 0;
        for(int i=0;i<s.length();i++)
        {
            int l1 = expm(s,i,i);
            int l2 = expm(s,i,i+1);
            int len = Math.max(l1,l2);
            if(len>end-start)
            {
                start = i-((len-1)/2);
                end = i+(len/2);
            }
        }
        return s.substring(start,end+1);
    }
    public int expm(String s,int left,int right)
    {
        if(s==null || left>right)
        {
            return 0;
        }
        while(left>=0 && right<s.length() && s.charAt(left)==s.charAt(right))
        {
            left--;
            right++;
        }
        return right-left-1;
    }
}