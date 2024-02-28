#include<stdio.h>
void main()
{
    int n,fact;
    n=17;
    fact=1;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        fact++;
    }
    if(fact>2)
    printf("%d is not a prime number.",n);
    else
    printf(" %d is  a prime number",n);
}