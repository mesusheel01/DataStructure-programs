#include<stdio.h>
void main()
{
    int a[10],b[10],c[20],i=0,j=0,m=0,n=0,k=0;
    printf("Enter the size of array A\n");
    scanf("%d",&m);
    printf("Enter the elements of array A\n");
    for(i=0;i<m;i++)
    scanf("%d",&a[i]);
    printf("Enter the size of array B\n");
    scanf("%d",&n);
    printf("Enter the elements of array B\n");
    for(j=0;j<n;j++)
    scanf("%d",&b[j]);
    i=0;j=0;
    while(i<m && j<n)
    {
        if(a[i]>b[j])
        {
            c[k]=b[j];
            j++;
            k++;
        }
        else if(a[i]==b[j])
        {
            c[k]=a[i];
            i++;j++;k++;
        }
       
        else
        {
            c[k]=a[i];
            i++;
            k++;
        }
    }
    while(i<m)
    {
        c[k]=a[i];
        i++;k++;
    }
    while(j<n)
    {
        c[k]=b[j];
        j++;k++;
    }
    printf("The new arrray C formed is\n");
    for(i=0;i<k;i++)
    printf("%d \n",c[i]);
}