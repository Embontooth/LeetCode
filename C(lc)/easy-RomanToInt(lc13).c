int romanToInt(char* s) {
    int i=0;
    int val=0;
    int n=strlen(s);
    while(i<n)
    {
        if(i<n-1)
        {
            if(s[i]=='I')
            {
                if(s[i+1]=='V')
                {
                    val=val+4;
                    i=i+2;
                }
                else if(s[i+1]=='X')
                {
                    val=val+9;
                    i=i+2;
                }
                else
                {
                    val=val+1;
                    i++;
                }
            }
            else if(s[i]=='X')
            {
                if(s[i+1]=='L')
                {
                    val=val+40;
                    i=i+2;
                }
                else if(s[i+1]=='C')
                {
                    val=val+90;
                    i=i+2;
                }
                else
                {
                    val=val+10;
                    i++;
                }
            }
            else if(s[i]=='C')
            {
                if(s[i+1]=='D')
                {
                    val=val+400;
                    i=i+2;
                }
                else if(s[i+1]=='M')
                {
                    val=val+900;
                    i=i+2;
                }
                else
                {
                    val=val+100;
                    i++;
                }
            }
            else if(s[i]=='V')
            {
                val=val+5;
                i++;
            }
            else if(s[i]=='L')
            {
                val=val+50;
                i++;
            }
            else if(s[i]=='D')
            {
                val=val+500;
                i++;
            }
            else if(s[i]=='M')
            {
                val=val+1000;
                i++;
            }
        }
        else if(i==n-1)
        {
            if(s[i]=='I')
            {
                val=val+1;
                i++;
            }
            else if(s[i]=='X')
            {
                val=val+10;
                i++;
            }
            else if(s[i]=='C')
            {
                val=val+100;
                i++;
            }
            else if(s[i]=='V')
            {
                val=val+5;
                i++;
            }
            else if(s[i]=='L')
            {
                val=val+50;
                i++;
            }
            else if(s[i]=='D')
            {
                val=val+500;
                i++;
            }
            else if(s[i]=='M')
            {
                val=val+1000;
                i++;
            }
        }
    }
    return val;
}