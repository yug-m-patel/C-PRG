// #include<stdio.h>
// #include<ctype.h>
// int top = -1;
// char stack[100];
// char x;
// char push(char k){
//         top++;
//         stack[top] = k;
// }

// char pop(){
//     if(top == -1){
//         return -1;
//     }
//     return stack[top--];
// }



// int priority(char h){
//     if(h= '('){
//         return 0;
//     }
//     if(h == '+' || h == '-'){
//         return 1;
//     }
//     if(h == '*' || h == '/'){
//         return 2;
//     }

//     return 0;
    
// }
// int main() {
//     char exp[100];
//     char *e;
   
//     scanf("%s", exp);
//     e = exp;
    

//     while(*e != '\0'){
//         if(isalnum(*e)){
//             printf("%c", *e);
//         }
//         else if(*e == '('){
//            push(*e);
//         }
//         else if(*e == ')'){
//              while((x == pop()) != '('){
//                 printf("%c", x);
//             }
          
//         }
//         else{
//             while(priority(stack[top]) >= priority(*e)){
//                 printf("%c", pop());
//             }
//             push(*e);
//         }
//         e++;
//     }

//     while (top != -1)
//     {
//         printf("%c", pop());
//     }
    

// }
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int precedence(char op){
    if(op == '+'||op == '-')
        return 1;
    if(op == '*'||op == '/')
        return 2;
    return 0;
}

int main(){
    char exp[100],postfix[100];
    int i,j=0,op,top=-1;
    char stack[100];
    
    printf("Enter the expression: ");
    scanf("%s",exp);
    
    for(i=0;exp[i];i++){
        if(exp[i] == '(')
            stack[++top] = exp[i];
        else if(isalnum(exp[i]))
            postfix[j++] = exp[i];
        else if(exp[i] == ')'){
            while(stack[top] != '('){
                postfix[j++] = stack[top--];
            }
            top--;
        }
        else{
            while(top >= 0 && precedence(exp[i]) <= precedence(stack[top])){
                postfix[j++] = stack[top--];
            }
            stack[++top] = exp[i];
        }
    }
    while(top >= 0){
        postfix[j++] = stack[top--];
    }
    postfix[j] = '\0';
    printf("Postfix expression: %s",postfix);
    
    return 0;
}