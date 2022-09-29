#include <stdio.h>
void main()
{
    int ar[5];
    int i,sum=0;int max=0;
    printf("Enter the elements of array \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("The elements of array is\n");
    for(i=0;i<5;i++)
    {
        sum=sum+ar[i];
    
    printf("\n%d ",ar[i]);
    }
    printf("\nThe sum of the array is %d \n",sum );
    for(i=0;i<5;i++)
    {
        if(ar[i]>ar[i+1])
        {
            max=ar[i];
        }
    }
    printf("\nmax element of the array is %d",max);
}
