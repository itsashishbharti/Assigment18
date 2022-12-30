#include<stdio.h>
void alphanu();
int main()
{
    char name[20];
    printf("\nEnter Your String= ");
    gets(name);
    alphanu(name);
    return 0;
}
void alphanu(char n[])
{
    int c=0;
    for(int i=0;n[i]!='\0';i++)
    {
        if(n[i]>=65&&n[i]<=90||n[i]>=97&&n[i]<=122)
        {
            c=1;
        }
        else if(n[i]=='0'||n[i]=='1'||n[i]=='2'||n[i]=='3'||n[i]=='4'||n[i]=='5'||n[i]=='6'||n[i]=='7'||n[i]=='8'||n[i]=='9')
        {
            c=1;
        }
        else{
            c=0;
            break;
        }
    }
    if(c==1)
    {
        printf("\n String Is Aplhanumeric");
    }
    else
    {
        printf("\n String Is Not  Aplhanumeric");
    }
}