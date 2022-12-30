#include<stdio.h>
#include<string.h>
void rev();
int main()
{
    char name[20];
    printf("\n Enter Your String=");
    gets(name);
    rev(name);
    return 0;
}
void rev(char name1[])
{
    printf("\n Reverse String Is...\n");
    int c=strlen(name1);
    for(int i=c;i>=0;i--)
    {
        printf("%c",name1[i]);
    }
}
