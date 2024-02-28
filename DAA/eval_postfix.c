#include<stdio.h>
#include<string.h>
#include<ctype.h>
int evalpost(char *exp)
{
    int i=0,j=0,n=strlen(exp);
    int stack[n];
    while (i < n) 
    {
        if (isdigit(exp[i]))
        {
            stack[j++] = exp[i]-'0';
        }
        else
        {
            int op1=stack[--j];
            int op2=stack[--j];
            switch(exp[i])
            {
                case '+':stack[j++]=op1+op2;break;
                case '-':stack[j++]=op1-op2;break;
                case '*':stack[j++]=op1*op2;break;
                case '/':stack[j++]=op1/op2;break;

            }
            // i++;
        }
        i++;
    }
    return stack[0];
}
int main()
{
    char exp[100];
    printf("Enter the postfix expression: ");
    scanf("%s",&exp);
    printf("Eval of post fix is %d",evalpost(exp));
    
    return 0;
}