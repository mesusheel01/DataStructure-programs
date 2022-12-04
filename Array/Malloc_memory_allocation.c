#include<stdio.h>
#include<stdlib.h>
void main()
{
    int* ptr,n,i;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*(sizeof(int)));
    if(ptr==NULL
    printf("Memory not allocated\n");
    else
    printf("Memory allocated\n");
    printf("Enter the elements of now \n");
    for(i=0;i<n;i++)
    scanf("%d",&ptr[i]);
    for(i=0;i<n;i++)
    printf("%d ",ptr[i]);
    
}