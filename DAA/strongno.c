//a number where the sum of the factorials of its digits equals the original number
#include<stdio.h>
int fact(int no)
{
    int res=1;
    for(int i=1;i<=no;i++)
    {
        res *= i;

    }
    return res;
}
void main()
{
    int n,sum,rem;
    n=145;
    int temp=n;
    sum=0;
    while(n)
    {
       rem=n%10;
       sum+=fact(rem);
       n=n/10; 
    }
    if(sum==temp)
        printf("%d is strong ",sum);
}