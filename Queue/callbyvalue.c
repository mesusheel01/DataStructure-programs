#include<stdio.h>
#include<stdlib.h>
#define Size 10
struct data
{
    int que[Size];
    int f;
    int r;
};
void create(struct data d)
{
    d.f=-1;
    d.r=-1;
}
void enqueue(struct data d,int v)
{
    if(d.r==Size-1)
    {
        printf("Full\n");
    }
    else if(d.f==-1)
    {
        d.f=0;
    }
    
    d.r+=1;
    d.que[d.r]=v;
    printf("%d\n",d.que[d.r]);
}
void dequeue(struct data d)
{
    int v=0;
       if(d.f==-1)
    {
        printf("Empty\n");
    }
    else{
    v=d.que[d.f];
    d.f++;
}
    printf("element dequeued %d\n",v);

}
void main()
{
    struct data d;
    create(d);
    int i;
    printf("Entering enqueu\n");
    for(i=1;i<=Size;i++)
    enqueue(d,i);
    printf("Entering dequeu\n");
    for(i=1;i<=Size;i++)
    dequeue(d);
    
}