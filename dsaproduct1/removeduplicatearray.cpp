#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int duplicate(vector<int> &a,int val)
{
    
    int n=a.size();
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=val)
        {
            a[j]=a[i];
            j++;
        }
    }
    return j;
}

int main()
{
    int n,val;
    cin>>n;
    cout<<"enter val";
    cin>>val;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int u;
        cin>>u;
        a.push_back(u);
    }
    int ans=duplicate(a,val);
    for(int i=0;i<ans;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}