#include<stdio.h>
#include<string.h>
#include<ctype.h>
int evalpost(char *exp)
{
    int j=0,n=strlen(exp),i=0;
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
    printf("Enter the prefix expression: ");
    scanf("%s",&exp);
    strrev(exp);
    printf("Eval of pre fix is %d",evalpost(exp));
    
    return 0;
}