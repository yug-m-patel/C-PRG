#include<stdio.h>
void main()
{
    int n,c;
    n=123;
    c = 0;
    while(n)
    {
        n /= 10;
        c += 1;

    }
    printf("%d count of digit",c);
    
}