#include<stdio.h>
void bubble_sort(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
               a[j]=a[j]+a[j+1];
               a[j+1]=a[j]-a[j+1];
               a[j]=a[j]-a[j+1];
            }
        }
    }
    printf("The sorted array is\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
void main()
{
    int a[10],n,i;
    printf("Enter the size of array a\n");
    scanf("%d",&n);
    printf("Enter the elements of array a\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    bubble_sort(a,n);

}