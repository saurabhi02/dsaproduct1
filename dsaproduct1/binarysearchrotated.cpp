#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int binarysearchrot(int a[],int key,int n)
{
    int l=0,h=n-1;
    int ans=0;
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        if(a[mid]==key)
        {
            ans=mid;
            break;
        }
        if(a[l]<a[mid])//left part is sorted 
        {
            if(a[l]<=key && a[mid]>key)
            {
                h=mid-1;
            }
            else
            l=mid+1;
        }
        else{
            if(a[h]>=key && key>a[mid])
            l=mid+1;
            else
            h=mid-1;
        }
    }
    if(h<l)
    return -1;
    else
    return ans;

}

int main()
{
    int n,key;
    cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
cout<< binarysearchrot(a,key,n);

    return 0;
}