//a number where the sum of digits of square of the number is equal to the number
#include<stdio.h>
void main()
{
    int n,sq,sum;
    sq=0;
    n=12;
    sum=0;
    sq=n*n;
    while(sq)
    {
        int rem=0;
        rem=sq%10;
        sum+=rem;
        sq=sq/10;
    }
    if(sum==n)
    {
        printf("%d is neon no",n);
    }
    else
    {
        printf("%d not a neon",n);
    }
}