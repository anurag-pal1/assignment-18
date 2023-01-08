#include<stdio.h>
void lowercase(char x[]);
int main()
{
    char a[200];
    printf("Enter a uppercase string:\n");
    scanf("%s",a);
    lowercase(a);
    return 0;
}
void lowercase(char x[])
{
    int i;
    for(i=0;x[i] != '\0';i++)
    {
        x[i]=x[i]+32;
    }
    printf("Lowercase string of given string is %s",x);
}



