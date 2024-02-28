#include<stdio.h>
void main()
{
    int n,fact;
    n=123;
    fact=0;
    for(int i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            fact++;
            printf("%d",i)
        }
    }
    printf("no of factore are := %d",fact);
}