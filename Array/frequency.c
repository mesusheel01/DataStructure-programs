#include <stdio.h>
void main()
{
    int ar[5],i,j,v=-1,f[5];
    printf("Enter the elements of array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<5;i++)
    {
       int c=1;
        for(j=i+1;j<5;j++)
        {
        if(ar[i]==ar[j])
        {
            f[j]=v;
            c++;
        }}
        if(f[i]!=v)
        {
            f[i]=c;
        }
    
}
for(i=0;i<5;i++)
{
    if(f[i]!=v)
    {
        printf("The element is %d and its frequency is %d \n",ar[i],f[i]);
    }
}
}
