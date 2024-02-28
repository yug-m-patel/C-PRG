#include<stdio.h>
void main()
{
    int a=1,b=1;
    for(int i=0;i<5;i++)
    {
        int c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}