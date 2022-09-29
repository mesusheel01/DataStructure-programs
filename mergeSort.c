#include<stdio.h>
int com(int a[],int l,int mid,int h)
{
    int i=l,j=h,k,c[10];
    if(i<j)
    {
        while(i<mid && mid>j)
        {
            if(a[i]<a[j])
            {
                c[k]=a[i];
                k++;
                i++;
            }
            else
            {
                c[k]=a[j];
                k++;
                j++;
            }
        }
    }
    for(i=0;i<h;i++)
    printf("%d ",c[i]);
return 0;}
int ms(int a[],int l,int h)
{
    int mid;
    if(l<h)
    {
        mid=(l+h)/2;
        ms(a,l,mid);
        ms(a,mid+1,h);
        com(a,l,mid,h);  
    }
return 0;}
void main()
{
    int i,a[10],n;
    printf("enter the length of array\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    ms(a,0,n);
}
