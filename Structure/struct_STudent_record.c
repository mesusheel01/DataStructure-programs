#include<stdio.h>
struct height
{
    int s_n;
    int adm;
    float marks;
};
void main()
{
   int i; struct height record[3];int n;
   printf("Enter the limit of entry\n");
   scanf("%d",&n);
   printf("Now enter the students details\n");
    for(i=0;i<n;i++)
    scanf("%d%d%f",&record->s_n,&record->adm,&record->marks);
    for(i=0;i<n;i++)
    printf("Serial no %d\nadm no %d\nmarks %f\n ",record->s_n,record->adm,record->marks);
}