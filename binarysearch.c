#include<stdio.h>
void bs(int a[], int f, int l,int ele)
{
    int mid,c,pos;
    while(f<=l)
    {
    mid=(f+l)/2;
        if(ele<a[mid])
        {
            l=mid-1;
        }
       
        else if(ele==a[mid])
        {
            c=1;
            pos=mid+1;
            printf("Element %d found at %d",a[mid],pos);
            break;
        }
        else 
         {
           l=mid+1; 
        } 
    }
}
    void main()
    {
        int a[10],i,n,ele;
         printf("Enter the length of array \n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search\n");
    scanf("%d",&ele);
        bs(a,0,9,ele);
      
    }