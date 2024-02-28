//test case -7,1,5,2,-4,3,0
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements you want in array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Elements of array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        int l_sum=0,r_sum=0;
        for(int j=0;j<i;j++)
        {
            l_sum += arr[j];
        }
        for(int j=i+1;j<n;j++)
        {
            r_sum += arr[j];
        }
        if(l_sum==r_sum)
        {
            printf("%d  \n",i);
            break;
        }
    }
}