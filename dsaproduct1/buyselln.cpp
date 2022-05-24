#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int  MaxProfit(vector<int> a)
{
    int n=a.size();
    int maxsofar=0,maxi=0;
    int minsofar=a[0],mini=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {

       minsofar=min(minsofar,a[i]);
        maxi=a[i]-minsofar;
        maxsofar=max(maxsofar,maxi);

    }
     
    return maxsofar;

}

int main()
{
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int u;
        cin>>u;
        a.push_back(u);
    }
   int  ans=MaxProfit(a);
   cout<<ans;

    return 0;
}