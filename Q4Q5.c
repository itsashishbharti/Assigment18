#include<stdio.h>
void upper();
void lower();
int main()
{
    char name[20];
    printf("\n Enter Your String= ");
    gets(name);
    upper(name);
   lower(name);
    return 0;
}
void upper(char n[])
{
    for(int i=0;n[i]!='\0';i++)
    {
        if(n[i]>=97&&n[i]<=122)
        {
            n[i]=n[i]-32;
        }
    }
    printf("\n Upper Name=%s",n);
}
void lower(char n[])
{
    for(int i=0;n[i]!='\0';i++)
    {
        if(n[i]>=65&&n[i]<=90)
        {
            n[i]=n[i]+32;
        }
    }
    printf("\n Lower Name=%s",n);
}