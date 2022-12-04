#include<stdio.h>
#include<stdlib.h>
#define max 5
struct stack
{
    int e[max];
    int top;
};
typedef struct stack s1 ;
void create( s1 *s)
{
    s->top=-1;
}
void full(s1 *s)
{
    if(s->top==max-1)
    printf("Full\n");
}
void empty(s1 *s)
{
    if(s->top==-1)
    printf("\nEmpty\n");
}
void push(s1 *s,int v)
{
    printf("Now i'm entering to push fun\n");
    if(s->top==max-1)
     printf("Stack is full\n");
     else{
        s->top+=1;
        s->e[s->top]=v;
     }
        printf("%d\n",s->e[s->top]);
}
void pop(s1 *s)
{
    int a;
        printf("\nNow i'm entering to pop fun\n");
    if(s->top==-1)
    printf("Underflow\n");
    else
    {
        a=s->e[s->top];
        s->top-=1;
    }
    printf("%d\n",a);
    printf("\nStack of the top %d",s->e[s->top]);
}

void main()
{   s1 *s;
    s= (s1*)malloc(sizeof(s1));
    create(s);
    push(s,40);
    push(s,70);
    push(s,80);
    push(s,90);   
    push(s,95);
    full(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
empty(s);
//stack k top ko ghatao badhao to vo top ki value aati jati rhegi array k tarah totally delete nhi hogi``````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````
}

