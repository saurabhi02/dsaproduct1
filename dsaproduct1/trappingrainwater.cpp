#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int trap(vector<int>& a)
{
        int ans=0;
        int n=a.size();
        int maxi=a[0];
        vector<int> left;
        vector<int> right;
        for(int i=1;i<n;i++)
        {
            maxi=max(maxi,a[i]);
            left.push_back(maxi);
        }
        maxi=0;
        for(int i=n-1;i>=1;i--)
        {
            maxi=max(maxi,a[i]);
            right.push_back(maxi);
        }

        for(int i=1;i<n;i++)
        {
            int val=min(left[i],right[i]);
            ans+=(val-a[i]);
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

    int ans=trap(a);
    cout<<ans;
    return 0;
}