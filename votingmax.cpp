#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int MaxFrequency(int a[],int n)
{
    int ans=-1;
    int ans1=-1;
    int maxn=n/2;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            cnt++;
        }
        
       
       if(ans<cnt && cnt > maxn)
       {
           ans=cnt ;
           ans1=a[i];
       }
       cnt=0;
    }


    return ans1;
}

int main()
{
    int n;
    cout<<"Enter the size of array ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array ";

    for(int i=0;i<n;i++)
    cin>>a[i];

    int ans=MaxFrequency(a,n);

    cout<<ans;

    return 0;
}
