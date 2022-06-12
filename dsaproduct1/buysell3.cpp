#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int maxProfit(vector<int> a)
{
   int mini=0,maxi=0;
   int minsofar=0,maxsofar=0;
   int ans=0;
   int cnt=0;
   int n=a.size();
   for(int i=0;i<n;i++)
   {
       minsofar=min(minsofar,a[i]);
        maxi=a[i]-minsofar;
        maxsofar=max(maxsofar,maxi);
   }
   for(int i=0;i<n;i++)
   {
       if(minsofar!=a[i])
       minsofar=min(minsofar,a[i]);
        maxi=a[i]-minsofar;
        maxsofar=max(maxsofar,maxi);
   }
   

return ans;

}
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int u;
        cin>>u;
        v.push_back(u);

    }

    int ans=maxProfit(v);
    cout<<ans;
    return 0;
}