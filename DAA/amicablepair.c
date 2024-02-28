//Amicable numbers are two different natural numbers related in such a way that the sum of the proper divisors of each is equal to the other number.
#include<stdio.h>
void main()
{
    int a,b,sum1,sum2;
    sum1=0;
    sum2=0;
    a=220;
    b=284;
    for(int i=1 ;i<a;i++)
    {
        if((a%i)==0)
            sum1+=i;
    }
    //printf("%d",sum1);
    for(int j=1;j<b;j++)
    {
        if((b%j)==0)
            sum2+=j;
    }
    //printf("%d",sum2);
    if(sum1==b && sum2==a)
        printf("%d & %d are AMICABLE PAIRS",a,b);
}