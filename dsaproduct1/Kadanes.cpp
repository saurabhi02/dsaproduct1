#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int Kadnes(int a[],int n)
{
    int maxi=-1;
    int sum=0;
    int start=0,end=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];

        if(sum>0)
        {
            maxi=max(sum,maxi);
            
        }
        else
        {
        sum=0;
      
        }

    }
    cout<<ans;
    return maxi;


}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    int ans=Kadnes(a,n);
    cout<<ans;
    return 0;
}