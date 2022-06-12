#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int Tapping(vector<int> a)
{
    int n=a.size();
    int maxi=0;
    vector<int> left,right;
    left.push_back(a[0]);
    for(int i=1;i<n;i++)
    {
        int insert=max(left[i-1],a[i]);
        left.push_back(insert);
    }
    right.push_back(a[n-1]);
    int j=0;
    for(int i=n-2;i>=0;i--)
    {
        int insert=max(right[j],a[i]);
        j++;
        right.push_back(insert);
    }
    int ans=0;
    
  
    for(int i=1;i<n-1;i++)
    {
        int mini=min(left[i],right[n-i-1]);
        maxi=mini-a[i];
        ans+=maxi;
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
    int ans=Tapping(a);
    cout<<ans;
    return 0;
}