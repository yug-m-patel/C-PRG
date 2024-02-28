#include<stdio.h>
void main()
{
    int n;
    
    printf("Enter the number of elements you want in array: ");
    scanf("%d",&n);
    printf("Enter Elements of Array:");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum;
    printf("Enter sum you want in subarray:");
    scanf("%d",&sum);
    int i;
    for( i=0;i<n;i++)
    {
        if(arr[i]==sum)
        {
            printf("%d",arr[i]);
            break;
        }
        else
        {
            int a_sum=0;
            for(int j=i;j<n;j++)
            {
                a_sum+=arr[j];
                if(a_sum==sum)
                {
                    printf("sum found in betwwen %d and %d",i,j);
                    break;
    
                }
            } 
            
        }
    }
    if(i==n)
    {
        printf("No Subarray found");
    }
    
}