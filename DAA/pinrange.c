#include<stdio.h>
void main()
{
    int ran=20;

    for(int i=2;i<=ran;i++)
    {
        int count=1;
        for(int j =2;j<=i;j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==2)
            printf("%d ",i);
    }
}