//infix to postfix conversion
#include<stdio.h>
#include<ctype.h>
//global variable
int top = -1;
char stack[50];
//functions for stack 
int precedence(char);
void push(char);
char pop();
//driver function;
int main()
{
    char str[20] = "x^y/(a*z)+b",x;
    for(int i=0; str[i]!='\0'; i++)
    {
        //if operand
        if(isalpha(str[i]))
        printf("%c", str[i]);
        //if opening bracket
        else if(str[i]=='(')
        push(str[i]);
        //if closing bracket
        else if(str[i]==')')
        {
            while((x=pop())!='(')
            printf("%c", x); 
        }
        else
        {
            while(precedence(stack[top]) >= precedence(str[i]))
            printf("%c", pop());
            push(str[i]);
        }
    }
        while(top>-1)
        {
            printf("%c", pop());
        }
        return 0;
}
    int precedence(char symbol)
    {
        if(symbol=='^')
        return 3;
        else if(symbol=='*' || symbol=='/')
        return 2;
        else if(symbol=='+' || symbol=='-')
        return 1;
        else
        return 0;
    }
    void push(char item)
    {
        stack[++top] = item;
    }
    char pop()
    {
        return stack[top--];
    }