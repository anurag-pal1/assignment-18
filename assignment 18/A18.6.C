#include<stdio.h>
void alphanumeric(char x[]);
int main()
{
    char a[200];
    printf("Enter a string:\n");
    scanf("%s",a);
    alphanumeric(a);
    return 0;
}
void alphanumeric(char x[])
{
    int i,f=0,C=0;
    for(i=0;x[i] != '\0';i++)
    {
        if((x[i]>='a'&&x[i]<='z')||(x[i]>='A'&&x[i]<='Z'))
        {
           f++;
        }
        else if((x[i]>=32&&x[i]<=47)||(x[i]>=58&&x[i]<=64)||(x[i]>=91&&x[i]<=96)||(x[i]>=123&&x[i]<=126))
        {
            C++;
        }
    }
    if(f>0&&C>0)
    {
         printf("String is alphanumeric.\n");
    }
    else
    {
         printf("String is not alphanumeric.\n");
    }
}
