#include<stdio.h>
void word(char x[]);
int main()
{
    char a[200];
    printf("Enter a string:\n");
    gets(a);
    word(a);
    return 0;
}
void word(char x[])
{
    int i,count=0;
    for(i=0;x[i] != '\0';i++)
    {
        if(x[i]==' ')
            count++;
    }
    count++;
    printf("Numbers of word in given string is %d",count);
}


