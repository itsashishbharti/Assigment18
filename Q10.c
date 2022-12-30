#include<stdio.h>
void repeat();
int main()
{
    char name[20];
    printf("\n Enter Your Name=");
    gets(name);
    repeat(name);
    return 0;
}
void repeat(char name[])
{
    char has[125]={0};
      for(int i=0;name[i]!='\0';i++)
    {
        has[name[i]]++;
    }
    printf("\n  Repeated Characters in string............\n");
    for(int i=0;i<125;i++)
    {
        if(has[i]!=0)
        {
            printf("\n%c is %d ",i,has[i]);
        }
    }
}