#include<stdio.h>
int insertion_sort(int a[],int n)//int *p
{
    int i,j,temp=0;
    for(i=1;i<n;i++)
    {
        temp=a[i];//temp=*(p+i);
        j=i-1;
        while(j>=0 && a[j]>temp)//return an array *{p+j)>temp}
        {
             a[j+1]=a[j];
             a[j]=temp;
             j--;
        }
        a[j+1]=temp;
    }for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
void main()
{
    int i,a[10],n;
    int *p;
    printf("enter the size of array a\n");
    scanf("%d",&n);
    printf("Enter the elements of array a\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
insertion_sort(a,n);
}
