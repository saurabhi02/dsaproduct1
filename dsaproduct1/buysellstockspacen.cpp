//using auxilary space
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int MaxProfit(vector<int> a)
{
    int n=a.size();
    int aux[n];
    int ans=0;
    aux[n-1]=a[n-1];
    
    for(int i=n-2;i>=0;i--)
    {
        if(aux[i+1]<a[i])
        {
            aux[i]=a[i];
        }
        else
        aux[i]=aux[i+1];
    }

    for(int i=0;i<n;i++)
    {
        int sum=aux[i]-a[i];
        ans=max(ans,sum);
        
    }

    return ans;

}


int main()
{
    int n;
    cin>>n;
    vector<int > v;
    for(int i =0;i<n;i++)
    {
        int u;
        cin>>u;
        v.push_back(u);
    }
    int ans=MaxProfit(v);
    cout<<ans;
    return 0;
}