//a perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. 
#include<stdio.h>
void main()
{
    int n,sum;
    n=6;
    sum=0;
    for(int i=1;i<n;i++)
    if(n%i==0)
    sum+=i;
    if(sum==n)
    printf("%d Is Perfect Number",n);
    else
    printf("%d not a Perfect Number",n);
}
