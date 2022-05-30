#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int binarySearch(int a[],int n,int l,int h,int x)
{
    if(l<=h)
    {
        int mid=l+(h-l)/2;
        if(a[mid]==x)
        return mid;
        if(a[mid]>x)
        return binarySearch(a,n,l,mid-1,x);
        else
        return binarySearch(a,n,mid+1,h,x);
    }
    return -1;
}

int Infintesearc(int a[],int n,int x)
{
    int l=0;
    int h=1;
    while(a[h]<x)
    {
        l=h;
        h*=2;
    }
    return binarySearch(a,n,l,h,x);
}



int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    int ans=Infintesearc(a,n,x);
    cout<<ans;
    return 0;
}