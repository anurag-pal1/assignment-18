#include<stdio.h>
#include<string.h>
void reverse(char x[]);
int main()
{
    char a[200];
    printf("Enter a string:\n");
    scanf("%s",a);
    reverse(a);
    return 0;
}
void reverse(char x[])
{
    int i,l,j=0;
    char y[200];
    l=strlen(x);
    for(i=l-1;i>=0;i--)
    {
        y[j]=x[i];
        j++;
    }
    y[j]='\0';
    printf("Reversed string is %s",y);
}
