#include<stdio.h>
void uppercase(char x[]);
int main()
{
    char a[200];
    printf("Enter a lowercase string:\n");
    scanf("%s",a);
    uppercase(a);
    return 0;
}
void uppercase(char x[])
{
    int i;
    for(i=0;x[i] != '\0';i++)
    {
        x[i]=x[i]-32;
    }
    printf("Uppercase string of given string is %s",x);
}


