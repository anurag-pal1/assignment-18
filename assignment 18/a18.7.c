#include<stdio.h>
#include<string.h>
void palindrome(char x[]);
int main()
{
    char a[200];
    printf("Enter a string:\n");
    scanf("%s",a);
    palindrome(a);
    return 0;
}
void palindrome(char x[])
{
    int i,l,j=0;
    char b[200];
    l=strlen(x);
    for(i=l-1;i>=0;i--)
    {
        b[j]=x[i];
        j++;
    }
    b[j]='\0';
    if(strcmp(x,b)==0)
    {
        printf("String is palindrome.\n");
    }
    else
    {
        printf("String is not palindrome.\n");
    }
}
