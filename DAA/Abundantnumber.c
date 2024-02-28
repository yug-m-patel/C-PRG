//n abundant number or excessive number is a positive integer for which the sum of its proper divisors is greater than the number
#include<stdio.h>
void main()
{
    int n,sum;
    n=12;
    sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        sum+=i;
    }
    if(sum>n)
    printf("%d is  Abundant number",n);
    else
    printf("%d no  Abundant number",n);
}