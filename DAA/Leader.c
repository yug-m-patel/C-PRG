#include<stdio.h>
void main()
{
    int n=10;
    int arr[n];
    printf("Enter the elements of array:\n");
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[n-1];
    printf("%d ",max);
    for(int i=(n-2);i>=0;i--)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            printf("%d ",max);
        }
    }
}