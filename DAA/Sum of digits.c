#include<stdio.h>
void main()
{
    int n,rem,sum;
    n=123;
    sum=0;
    while(n)
    {
        rem=n%10;
        n /= 10;
        sum += rem;
    }
    printf("Sum of digits=%d",sum);
}