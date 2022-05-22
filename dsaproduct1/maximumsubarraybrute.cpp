#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int maxsubarray(int a[],int n)
{
    int sum=0;
    int maxi=-1;
    
    int ans=0;
    int ans1=0;
    for(int i=0;i<n;i++)
    {
        sum=a[i];
      
      //  ans=cnt;
        for(int j=i+1;j<n;j++)
        {
            sum+=a[j];
            maxi=max(maxi,sum);
            
            
            
           
            
        }
       
    }
   
    return maxi;
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int ans=maxsubarray(a,n);
    cout<<ans;

    return 0;
}