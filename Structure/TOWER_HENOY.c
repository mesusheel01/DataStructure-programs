#include<stdio.h>
int tower(int n,char a,char b, char c)
{
    if(n==0)
    {
        return 1;
    }
    else{
tower(n-1,a,c,b);
printf("%d disk is moving from %c to %c \n",n,a,b);
tower(n-1,c,b,a);
}
}
void main()
{
    char a,b,c;
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    tower(n,'a','b','c');
}