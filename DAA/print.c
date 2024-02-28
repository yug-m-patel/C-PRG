#include<stdio.h>
void main()
{
    char s[100];
    printf("Enter Your Name :");
    scanf(" %[^\n]s",&s);
    printf("%s",s);
}