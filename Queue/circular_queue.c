#include<stdio.h>
#define size 10
int front=-1;
int rear=-1;
int a[size];
void enqueue(int e)
{
    if(rear==size-1 && front>0)
    {
        rear=(rear+1)%size;
        a[rear]=e;
        printf("%d\n",a[rear]);
    }
    else if(rear==size-1)
    {
        printf("Queue is full\n");
    }
    else 
    {
        if(front==-1)
        front=0;
        rear=(rear+1)%size;
        a[rear]=e;
        printf("%d\n",a[rear]);
    }
}
void dequeue()
{
    if(front==-1)
    {
        printf("Empty\n");
    }
    else
    {
        printf("%d\n",a[front]);
        front=(front+1)%size;
    }
}
void main()
{
    int i;
    printf("Entering enqueue\n");
    for(i=0;i<size;i++)
    enqueue(i);
    printf("Entering dequeue\n");
    for(i=0;i<3;i++)
    dequeue();
    printf("Entering enqueue\n");
    for(i=0;i<3;i++)
    enqueue(i);
}