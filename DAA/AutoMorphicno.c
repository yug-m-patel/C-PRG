//an integer whose square ends with the given integer
//Auto Morphic Number
#include<stdio.h>
void main()
{
    int n,sq,c=0;
    sq=0;
    n=76;
    sq=n*n;
    int temp=n;
    int count =0;
    while(temp)
    {
        temp /=10;
        count +=1;
    }
    for(int i=1;i<=count;i++)
    {
        if(n%10==sq%10)
        {
            c++;
        }
    }
    if(c==count)
    printf("%d is Auto Morphic number ",n);
}