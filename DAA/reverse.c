// rev of no 
#include<stdio.h>
void main()
{
    int a,rev;
    a=123;
    rev=0;
    while(a);
    {
        rev=rev*10+a%10;
        a=a/10;
    }
    printf("%d",rev);
}