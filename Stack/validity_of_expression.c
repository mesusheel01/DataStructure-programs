#include<stdio.h>
#include<string.h>-
#define max 10
int top=-1;
char stack[max];
void push(char);
char pop();
void push(char item)
{
    if(top==max-1)
    {
        printf("overflow\n");
    }
    else
    {
        stack[top]=item;
        top+=1;
    }
}
char pop()
{
       if(top==-1)
    {
        printf("underflow\n");
    }
    
        char temp;
        temp=stack[top];
        top-=1;
        return temp;
}
void main()
{
    char exp[max],temp;
    int i,flag=1;
    printf("Enter the string\n");
    gets(exp);
    for(i=0;i<strlen(exp);i++)
    {
        if(exp[i]=='(' || (temp=='{')|| temp=='[' )
    push(exp[i]);
     if(exp[i]==')' || (temp=='}')|| temp==']' )
    if(top==-1)
    {
        flag=0;
        break;
    }
    else{
        temp=pop();
            if(exp[i]==')' && (temp=='{')|| temp=='[' )
    flag=0;
        if(exp[i]=='}' || (temp=='(')|| temp=='[' )
    flag=0;
      if(exp[i]==']' || (temp=='(')|| temp=='}' )
    flag=0;
    }
}
if(top>=0)
{
    flag=0;
}
if(flag==1)
printf("Valid exp\n");
else
printf("invalid exp\n");
}

