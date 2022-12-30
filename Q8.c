#include<stdio.h>
#include<string.h>
void wordc();
int main()
{
    char stri[20];
    printf("\n Enter Your String= ");
    gets(stri);
    wordc(stri);
    return 0;
}
void wordc(char n[])
{
    int s=strlen(n);
    int c=0;
    for(int i=0;i<s;i++)
    {
        if(n[i]==' ')
        {
            c++;
        }
    }
    printf("\n Total Words in String=%d",c+1);
}