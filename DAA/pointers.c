#include<stdio.h>
int main()
{
    int a=10;
    char *p;
    p=&a;
    printf("%d \n",a);
    printf("%d \n",&a);
    printf("%d \n",p);
    printf("%d",*p);
}