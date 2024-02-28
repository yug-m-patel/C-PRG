#include<stdio.h>
void main()
{
    int n,rem,rev;
    n=121;
    rev=0;
    int temp = n;
    while(n)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(temp == rev)
    printf("\nNumber is a palindrome");
    
}