#include<stdio.h>
#include<stdlib.h>
#define size 10
struct queue
{
    int que[size];
    int f;
    int r;
};
typedef struct queue s1;
void create(s1 *s)
{
    s->f=-1;
    s->r=-1;
}
void enqueue(s1 *s,int v)
{
    if(s->r==size-1)
    {
        printf("queue is full\n");
    }
    else
    {
        if(s->f==-1)
       { s->f=0;}
        s->r+=1;
        s->que[s->r]=v;
        printf("%d\n",s->que[s->r]);
    }
}
void dequeue(s1 *s)
{
    int v;
    if(s->f==-1)
    {
        printf("Empty\n");
    }
    else
    v=s->que[s->f];
    s->f+=1;
    printf("Element dequed %d\n",v);
}
void main()
{
     s1 *s;
    s= (s1*)malloc(sizeof(s1));
    int i;
    create(s);
    for(i=1;i<=size;i++)
    enqueue(s,i);
    
    for(i=1;i<=size;i++)
    dequeue(s);
}
