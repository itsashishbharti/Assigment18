#include<stdio.h>
#include<string.h>
void palind();
int main()
{
    char name[20];
    printf("\n Enter Your String=");
    gets(name);
    palind(name);
    return 0;
}
void palind(char n[])
{
    int c=strlen(n);
    int s=0;
    for(int i=0;i<c;i++)
    {
        if(n[i]!=n[c-i-1])
        {
            s=1;
            break;
        }
    }
    
    if(s==0)
    {
        printf("\n String is Palindrom");
    }
    else
    {
        printf("\n String is Not Palindrom");
    }
}