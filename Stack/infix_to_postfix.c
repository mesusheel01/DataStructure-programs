#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#define size 10
int stack[size];
int top=-1;
void push(int item)
{
	if(top > size-1)
	{
		printf("\nStack Overflow.");
	}
	else
	{
		top = top+1;
		stack[top] = item;
	}
}
char pop()
{
	int item ;

	if(top <0)
	{
		printf("stack under flow: invalid infix expression");
		getchar();
		exit(1);
	}
	else
	{
		item = stack[top];
		top = top-1;
		return(item);
	}
}
void main()
{
    char a[10];
    char *p;
    int u;
    printf("Enter the exp\n");
    scanf("%s",a);
    p=a;
    int result;
    int b,x,y;
    while(*p!='\0')
    {
        if(isdigit(*p))
        {
            b=*p-48;
            push(b);
        }
        else
        {
            y=pop();
            x=pop();
            switch(*p)
            {
                case '+':result=x+y;
                break;
                case '-':result=x-y;
                break;
                case '*':result=x*y;
                break;
                case '/':result=x/y;
                break;
                case '^':result=pow(x,y);
                break;
                default:printf("Wrong exp\n");
            }
            push(result);
        }*p++;
    }
    u=pop();
        printf("The postfix exp is %d ",u);

}