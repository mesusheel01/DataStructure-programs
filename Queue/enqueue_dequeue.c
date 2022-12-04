#include<stdio.h>
#define size 10
int queue[size];
int f=-1;
int rear=-1;
void enqueue(int val)
{
   
    if(rear==size-1)
    printf("queue is full\n");
    else{
        if(f==-1)
        {
        f=0;
        }
        rear++;
        queue[rear]=val;
        printf("%d\n",queue[rear]);
    }
}
void dequeue()
{
int v;
    if(f==-1)
    {
        printf("Empty\n");
    }
    else
    v=queue[f];

    f++;
    printf("element dequeued %d\n",v);
}
void main()
{
    int i;
     printf("Entering enqueue\n");
    for(i=1;i<=size;i++)
    enqueue(i);
    printf("Entering dequeue\n");

    for(i=1;i<=size;i++)
    dequeue();

}








