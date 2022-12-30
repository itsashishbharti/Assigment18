#include<stdio.h>
#include<string.h>
void revword();
int main()
{
    char name[50];
    printf("\n Enter Your String= ");
    gets(name);
    revword(name);
    return 0;
}
void revword(char n[])
{
    int c=strlen(n);
    for(int i=c-1;i>=0;i--)
    {
        if(n[i]==' ')
        {
            n[i]='\0';
            printf("%s ",&(n[i])+1);
        }
    }
    printf("%s ",n);
}