//Brute force 
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int maxprofit(vector<int> a)
{
    int n=a.size();
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int sum=a[j]-a[i];
                ans=max(ans,sum);
            }
        }
    }

    return ans;

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

    int ans=maxprofit(a);
    cout<<ans;
    return 0;
}