#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void bubblesort(int a[],int n)
{

    
    for(int i=0;i<n-1;i++)
    {
        
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                a[j]=a[j]^a[j+1];
                a[j+1]=a[j]^a[j+1];
                a[j]=a[j]^a[j+1];
                //cnt++;
            }

        }
        
    }

}

int main()
{
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    bubblesort(a,n);
    cout<<"elements in array are"<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

    return 0;
}