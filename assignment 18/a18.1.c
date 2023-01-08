#include<stdio.h>
void length(char x[]);
int main()
{
    char a[200];
    printf("Enter a string:\n");
    scanf("%s",a);
    length(a);
    return 0;
}
void length(char x[])
{
    int i,len=0;
    for(i=0;x[i] != '\0';i++)
    {
        len++;
    }
    printf("Length of given string is %d",len);
}

