#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
    while(t--)
    {
        int* a;
        int n;
        cin>>n;
        a  =(int*)calloc(2*n,sizeof(int));
        int i;int c=0;
        int mid=n;
        int s1[mid],s2[mid];
        for(i=0;i<n;i++)
        {
            s1[i]=a[i];
        }//prints1
        for(i=0;i<n;i++)
        {
            s1[i]=a[i];
        cout<<s1[i];
        }

        for(i=n;i<2*n;i++)
        {
            s2[i]=a[i];
        }
        for(i=0;i<n;i++)
        {
            if(s1[i]==s2[i])
            {
                c=1;
            }
        }
        if(c==1)
        cout<<"No"<<endl;
        else
        cout<<"Yes"<<endl;
        
        
    }
	return 0;
}
