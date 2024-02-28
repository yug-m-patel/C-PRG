//the sum of its own digits raised to the power number of digits gives the number itself.
#include<stdio.h>
int pov(int n, int l) 
{
    int a=1;
    for(int i=1;i<=l;i++)
    {
        a*=n;
    }
    return a;
}
int main()
{
    int n,a,c,arm,rem;
    n=1634;
    c=0;
    rem=0;
    arm=0;
    a=n;
    int temp = n;
    while(a)
    {
        c+=1;
        a/=10;
    }
    while(n)
    {
        rem=n%10;
        arm+=pov(rem,c);
        n/=10;
    }
    if(arm==temp)
    printf("no is armstrong");
}