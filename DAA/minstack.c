#include<stdio.h>
int minstack[100];
int stack[100];
int top = -1,top1=-1;
void push(int val)
{
    if(top==100)
    {
        printf("Stack is full");
    }
    else
    {
        top++;
        stack[top]=val;
        if(top1==-1)
        {
            top1++;
            minstack[top1]=val;
        }
        else if(minstack[top1]<stack[top])
        {
            int min = minstack[top1];
            top1++;
            minstack[top1]=min;
        }
        else
        {
            int min = stack[top];
            top1++;
            minstack[top1]=min;
        }
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        top--;
        top1--;
    }
}
void main()
{
    push(10);
    push(20);
    push(3);
    push(16);
    push(2);
    
    for(int i=0;i<=top;i++)
    {
        printf("%d ",stack[i]);
    }
    printf("\n");
    for(int i=0;i<=top1;i++)
    {
        printf("%d ",minstack[i]);
    }
}