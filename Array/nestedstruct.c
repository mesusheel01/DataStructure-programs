#include<stdio.h>
struct student
{
    int roll;
    char name[10];
    float marks;
};
struct add
{
    char city[10];
    int pin;
    struct student s1;
};
void main()
{
    struct add e1[10];
    int n,i;
    printf("Enter the total no of students\n");
    scanf("%d",&n);
    printf("Now enter the students details\n");
    for(i=0;i<n;i++)
    scanf("%d%s%f%s%d",&e1[i].s1.roll,&e1[i].s1.name,&e1[i].s1.marks,&e1[i].city,&e1[i].pin);
     for(i=0;i<n;i++)
    printf("Roll no %d \n name %s \n marks %f \n add %s \n",e1[i].s1.roll,e1[i].s1.name,e1[i].s1.marks,e1[i].city);
}