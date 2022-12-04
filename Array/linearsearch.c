#include<stdio.h>
void ls(int a[],int n,int ele)
{
    int i,position,c;
    for (i=0;i<n;i++)
    {
          if(ele==a[i])
          {
            c=1;
            position =i+1;
            printf("The element is %d found and its postion is at %d",ele,position);
            break;
          }
    }
    if(c==0)
    printf("Element not found");
}
void main()
{
    int a[10],i,n,ele;
    printf("Enter the length of array\n");
    scanf("%d",&n);
    printf("Enter the elements of array A\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to perform searching\n");
    scanf("%d",&ele);
    ls(a,n,ele);
}