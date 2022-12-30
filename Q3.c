#include<stdio.h>
void cmpr();
int main()
{
    char name[20],name1[20];
    printf("\n Enter Your 1st String=");
    gets(name);
    printf("\n Enter Your 1st String=");
    gets(name1);
    cmpr(name,name1);
    return 0;
}
void cmpr(char name[],char name1[])
{
    int s,s1,c=0;
    s=strlen(name);
    s1=strlen(name1);
    if(s!=s1)
    {
        printf("\n Both String are Different");
    }
    else
    {
        for(int i=0;i<s;i++)
        {
            if(name[i]==name1[i])
            {
                c=1;
            }
            else{
                c=0;
                break;
            }
        }
    }
    if(c==1)
    {
        printf("\n Data Match....");
    }
    else
    {
        printf("\n Data not Matched........");
    }
}