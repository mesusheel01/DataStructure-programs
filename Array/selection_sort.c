#include<stdio.h>
void selection(int a[],int n)
{
    int i,min,j,t=0;
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
            min=j;
            } 
        }   
    
        if(min!=i)
        {
            t=a[min];
            a[min]=a[j];
            a[j]=t;
        }
}
    printf("The sorted array is :- \n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
void main()
{
    int a[10],n,i;
    printf("Enter the length of array\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    selection(a,n);
}
