#include <stdio.h>
#include <string.h>
bool isValid(char* s) 
{
    int top=-1;
    char stack[strlen(s)];
    bool val = true;
    if((strlen(s))%2!=0)
    {
        val = false;
    }
    else
    {
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                top++;
                stack[top]=s[i];
            }
            else if(s[i]==')')
            {
                if(top==-1)
                {
                    val=false;
                    break;
                }
                else if(stack[top]!='(')
                {
                    val=false;
                    break;
                }
                else
                {
                    top--;
                }
            }
            else if(s[i]=='}')
            {
                if(top==-1)
                {
                    val=false;
                    break;
                }
                else if(stack[top]!='{')
                {
                    val=false;
                    break;
                }
                else
                {
                    top--;
                }
            }
            else if(s[i]==']')
            {
                if(top==-1)
                {
                    val=false;
                    break;
                }
                else if(stack[top]!='[')
                {
                    val=false;
                    break;
                }
                else
                {
                    top--;
                }
            }
        }
    }
    if(top>-1)
    {
        val=false;
    }
    return val;
}