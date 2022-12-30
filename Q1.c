#include<stdio.h>
void strlenth();
int main()
{
    char name[20];
    printf("\nEnter Your Name=");
    gets(name);
    strlenth(name);
    return 0;
}
void strlenth( char name1[])
{
    int c=0;
    for(int i=0;name1[i]!='\0';i++)
    {
        c++;
    }
    printf("\n Length =%d",c);
}