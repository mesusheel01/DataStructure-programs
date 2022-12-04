#include<stdio.h>
#define max 10
int stack[max];
int top=-1;
void push(int size,int v)
{
    printf("Now i'm entering to push fun\n");
    if(top==max-1)
     printf("Stack is full\n");
     else{
        top+=1;
        stack[top]=v;
     }
     printf("%d\n",stack[top]);
}
void pop()
{
    printf("Now i'm entering to pop fun\n");

    int a;
    if(top==-1)
    printf("Underflow\n");
    else
    {
        a=stack[top];
        top-=1;
    }
    printf("%d\n",a);
    printf("Stack of the top %d",stack[top]);
}
void main()
{
    push(5,40);
    push(5,60);
    push(5,70);
    push(5,90);
    push(5,95);

    pop();
}