#include<stdio.h>
void repeated(char x[]);
int main()
{
    char a[200];
    printf("Enter a string:\n");
    gets(a);
    repeated(a);
    return 0;
}
void repeated(char x[])
{
    int i;
    int hash[200]={0};
    for(i=0;x[i] != '\0';i++)
    {
        hash[x[i]]++;
    }
    for(i=0;i<123;i++)
    {
        if(hash[i]>1)
        {
            printf("%c --> %d\n",i,hash[i]);
        }
    }
}
