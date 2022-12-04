#include<stdio.h>
void main()
{
    int a[5],i,j,b[5],m,n;
 printf("Enter the size of array A and B\n");
    printf("Enter the elements of array A\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
printf("Enter the elements of array B\n");
for(j=0;j<n;j++)
{
    scanf("%d",&b[j]);
}
    merge_array(a,m,b,n);
}
merge_array(int a[],int m,int b[],int n)
{
    int c[10],i,j,k;
   
    while(i<m && j<n)
    {
        if(a[i]>b[j])
        {
            c[k]=b[j];
            j++;k++;
        }
        else if(a[i]==b[j])
        {
            c[k]=a[i];
            i++;k++;
        }
        else 
        {
            c[k]=a[i];
            i++;k++;
        }
    }
    printf("The new merged array is\n");
    for(i=0;i<k;i++)
    printf("%d \n",c[i]);
}